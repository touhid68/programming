#include<bits/stdc++.h>
using namespace std;

int phi[1000006]={0}, mark[1000006]={0};

///from 1 to n, no. of co-prime of each value.
void sievephi(int n)
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    mark[1]=1;

    for(i=2;i<=n;i++)
    {
        if(!mark[i])
        {
            for(j=i;j<=n;j+=i)
            {
                mark[j]=1;
                ///phi[j] is divisible by i. phi[j] says that there are phi[j] numbers co-prime of j.
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<phi[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    sievephi(n);
}
