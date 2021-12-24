//Incomplete

#include <bits/stdc++.h>
using namespace std;

vector<int>divisors[1000002];

void divisor(int n)
{
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j+=i){
            divisors[j].push_back(i);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<divisors[j][i]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin>>n;
    divisor(n);
    return 0;
}
