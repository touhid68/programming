
#include <bits/stdc++.h>
using namespace std;

int prime[300000]= {0},nPrime=0;
int mark[1000002]= {0};

int countDivisor(int n)
{
    int divisor = 1;
    for (int i = 0; i < nPrime; i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 1;
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                cnt++;
            }
            divisor *= cnt;
            if(n==1)break;
        }
    }
    cout<< divisor;
    return 0;
}

void sieve(int n)
{
    int i,j,limit=sqrt(n)+2;
    mark[1]=1;
    prime[nPrime++]=2;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
    countDivisor(n);
}

int main()
{
    int n;
    cin>>n;
    sieve(n);
}
