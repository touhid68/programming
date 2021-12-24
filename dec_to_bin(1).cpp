#include<bits/stdc++.h>
using namespace std;

long long convert(int n)
{
    long long bin=0;
    int rem,i=1;
    while(n!=0)
    {
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }
    cout<<bin;
}

int main()
{
    int n;
    cin>>n;
    convert(n);
    return 0;
}
