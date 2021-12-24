#include<bits/stdc++.h>
using namespace std;

int convert(long long n)
{
    int dec=0,index=0,rem;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        dec+=rem*pow(2,index);
        ++index;
    }
    cout<<dec;
}

int main()
{
    long long n;
    cin>>n;
    convert(n);
    return 0;
}
