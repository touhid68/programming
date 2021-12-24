#include<bits/stdc++.h>
using namespace std;

int bigmod(int base,int power,int M)
{
    if(power==0)
        return 1%M;
    int x=bigmod(base,power/2,M);
    cout<<x<<endl;
    x=(x*x)%M;
    if(power%2==1)
        x=(x*base)%M;
    return x;
}

int main()
{
    int base,power,M;
    cin>>base>>power>>M;
    cout<<bigmod(base,power,M);
}
