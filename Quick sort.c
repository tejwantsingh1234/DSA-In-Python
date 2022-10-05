#include <stdio.h>
int swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int a[],int lb,int ub)
{
    int pivot  = a[lb];
    int start = lb;
    int end = ub;

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(&a[start],&a[end]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;
}

int quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}

int main()
{
    int a[20],n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;


}