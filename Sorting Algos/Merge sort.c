#include <stdio.h>


void merge(int a[],int lb,int mid,int ub)
{
    int i = lb;
    int j = mid+1;
    int k = lb;
    int b[20];
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(k = lb; k<=ub;k++)
    {
        a[k] = b[k];
    }
    
}
void mergesort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int a[20],n,i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}