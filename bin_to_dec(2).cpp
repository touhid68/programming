#include<bits/stdc++.h>
using namespace std;

int main()
{
    char bin[32]={0};
    gets(bin);

//    string bin;
//    cin>>bin;   //bin.length()

    int dec=0,index=0;
    for(int i=strlen(bin)-1;i>=0;i--)
    {
        dec+=(bin[i]-'0')*pow(2,index);
        ++index;
    }
    cout<<dec;
    return 0;
}
