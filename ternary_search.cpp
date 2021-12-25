#include <bits/stdc++.h>
using namespace std;

void ternary_search(int a[],int n)
{
    int item;
    cin>>item;
    int low_index=0,high_index=n-1;

    while(low_index<=high_index)
    {
        int mid1=low_index+((high_index-low_index)/3);///(2lo+hi)/3
        int mid2=high_index-((high_index-low_index)/3);///(lo+2hi)/3

        if(a[mid1]==item || a[mid2]==item)
        {
            break;
        }
        else if(item<a[mid1])
        {
            high_index=mid1-1;
        }
        else if(item>a[mid2])
        {
            low_index=mid2+1;
        }
        else
        {
            low_index=mid1+1;
            high_index=mid2-1;
        }
    }

    if(low_index>high_index)
        printf("%d is not found.\n",item);
    else
        printf("%d is found.\n",item);
}

int main()
{
    int n=10;
    int a[n] = {9,8,7,1,2,3,6,5,4,0};
    sort(a,a+n);
    ternary_search(a,n);
    return 0;
}
