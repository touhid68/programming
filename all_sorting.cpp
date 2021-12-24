/*-------------------- In The Name Of Allah --------------------------------

-------------------- Performer : Md Mossadek Touhid -----------------------*/


#include <bits/stdc++.h>
using namespace std;

///--------------------------Chapter 9--------------------------------------///
///----------------------Sorting Algorithm----------------------------------///
///Bubble,Selection,Insertion,Counting,Merge,Quick,Radix,Bucket,Shell,Heap///

/*
//-----------------------Bubble Sort start-------------------------------//
void bubble_sort(int a[],int n)
{
    int s,i,temp;
    while(1)
    {
        s=0;
        for(i=0; i<n-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    s=1;
                }
            }
        if(s==0)
            break;
    }
    printf("Array after sorted(bubble):\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
//-------------------------Bubble Sort End-------------------------------//

//------------------------Selection Sort Start---------------------------//
void selection_sort(int a[],int n)
{
    int i,j,min_index,temp;
    for(i=0; i<n-1; i++)
    {
        min_index=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
    printf("Array after sorted(selection):\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
//-------------------------Selection Sort End----------------------------//

//------------------------Insertion Sort Start---------------------------//
void insertion_sort(int a[],int n)
{
    int i,j,item;
    for(i=1; i<n; i++)
    {
        item=a[i];
        j=i-1;
        while(j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=item;
    }
    printf("Array after sorted(insertion):\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
//---------------------------Insertion Sort end---------------------------//

//---------------------------Counting Sort Start-------------------------//
void counting_sort(int a[],int n)
{
    int count[21]= {0},i,x; ///max number of input=20,so array size[21]
    for(i=0; i<n; i++)
    {
        x=a[i];
        count[x]++;
    }
    printf("Array after sorted(counting):\n");
    for(x=0; x<21; x++)
    {
        while(count[x]>0)
        {
            printf("%d ",x);
            count[x]--;
        }
    }
    printf("\n\n");
}
//--------------------------Counting Sort End-----------------------------//

//---------------------------Merge Sort Start-----------------------------//
void merge(int a[],int low,int mid,int high)
{
    int i;
    int index_a,index_low,index_high;
    int low_size,high_size;

    low_size=mid-low+1;
    high_size=high-mid;

    int L[low_size],R[high_size];

    for(i=0; i<low_size; i++)
    {
        L[i]=a[low+i];
    }

    for(i=0; i<high_size; i++)
    {
        R[i]=a[mid+1+i];
    }
    index_low=0;
    index_high=0;
    for(index_a=low; index_low<low_size && index_high<high_size; index_a++)
    {
        if(L[index_low]<R[index_high])
        {
            a[index_a]=L[index_low];
            index_low+=1;
        }
        else
        {
            a[index_a]=R[index_high];
            index_high+=1;
        }
    }

    while(index_low<low_size)
    {
        a[index_a]=L[index_low];
        index_low+=1;
        index_a+=1;
    }
    while(index_high<high_size)
    {
        a[index_a]=R[index_high];
        index_high+=1;
        index_a+=1;
    }
}
void merge_sort(int a[],int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int mid=low+(high-low)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
    printf("Array after sorted(merge):\n");
    for(int i=0; i<=high; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}
//----------------------------Merge Sort End-------------------------------//

//----------------------------Quick Sort Start-----------------------------//
int partition(int a[],int low,int high)
{
    int pivot,i,j,t;
    pivot=a[high];
    for(i=low-1,j=low; j<=high; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            t=a[j];
            a[j]=a[i];
            a[i]=t;
        }
    }
    t=a[high];
    a[high]=a[i+1];
    a[i+1]=t;

    return i+1;
}
void quick_sort(int a[],int low,int high)
{
    if(low>=high)
    {
        return ;
    }
    int p=partition(a,low,high);
    quick_sort(a,low,p-1);
    quick_sort(a,p+1,high);

    printf("Array after sorted(quick):\n");
    for(int i=0; i<=high; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

}
//-----------------------------Quick Sort End-----------------------------//

int main()
{
    int a[10],n,i;
    srand(time(NULL));
    printf("Please,Take a number(array size that will be equal or less than 10): ");
    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        a[i]=(rand()%20)+1;

    }
    printf("\n");
    printf("Array before sorted:\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    bubble_sort(a,n);
    selection_sort(a,n);
    insertion_sort(a,n);
    counting_sort(a,n);
    printf("------------------------Merge Sort Start------------------------\n");
    merge_sort(a,0,n-1);
    printf("------------------------Merge Sort End--------------------------\n");
    printf("------------------------Quick Sort Start------------------------\n");
    quick_sort(a,0,n-1);
    printf("------------------------Quick Sort End--------------------------\n");

    return 0;
}
*/
