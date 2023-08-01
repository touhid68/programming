#include<bits/stdc++.h>
using namespace std;

void binary_search(int a[],int n)
{
    int item;
    printf("\n(Binary search)The searching item is: ");
    scanf("%d",&item);
    int low_index=1; //if 0 based index, then here 0
    int high_index=n; // then here (n-1)
    int mid_index;
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(item==a[mid_index])
        {
            break;
        }
        else if(item<a[mid_index])
        {
            high_index=mid_index-1;
        }
        else if(item>a[mid_index])
        {
            low_index=mid_index+1;
        }
    }
    if(low_index>high_index)
        printf("%d is not found.\n",item);
    else
        printf("%d is found in %dth position.\n",a[mid_index],mid_index);

}

int main()
{
    int n=10;
    int a[n],i;
    printf("Initial Array:\n");
    for(i=1; i<=n; i++) // i=0; i<n; i++
    {
        cin>>a[i];
        //a[i]=(rand()%5)+1;
    }
    sort(a+0,a+n+1); // if 0 based index, sort(a,a+n)
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    binary_search(a,n);
    return 0;

}
