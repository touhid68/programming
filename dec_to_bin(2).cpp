#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,index;
    int bin[32];
    cin>>number;
    index=0;
    while(number>0)
    {
        bin[index]=number%2;
        number/=2;
        ++index;
    }
    for(int i=index-1;i>=0;i--)
    {
        cout<<bin[i];
    }
}
