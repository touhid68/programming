#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cout<<"Enter your number: ";
    cin>>n;

    int limit = sqrt(n);
    int nod = 1,sod = 1;
    
    


    for(int i=2; i<= limit ; i++){
        
        if(n%i == 0){
            int count = 0;
            int temp = 0;
            // n/=i;
            while(n%i==0){
                n/=i;
                count++;
                temp+=pow(i,count);
            }
            temp++;
            sod*=temp;
            nod *= (count+1);
        }
        
    }
    cout<<"NOD is: "<<nod<<endl;
    cout<<"SOD is: "<<sod<<endl;
}