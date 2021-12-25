#include<bits/stdc++.h>
using namespace std;

int used[20],number[20];
/// call with:permutation(1,n)
///make sure : all entries in used[20] is 0

void permutation(int pos,int n)
{
    ///print portion
    if(pos==n+1)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<number[i]<<" ";
        }
        cout<<endl;
        return;
    }

    ///set portion
    for(int j=1; j<=n; j++)
    {
        if(used[j]==0)
        {
            number[pos]=j;
            used[j]=1;
            permutation(pos+1,n);
            used[j]=0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    permutation(1,n);
    return 0;
}
