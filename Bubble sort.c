
#include<stdio.h>
int main()
{
    int a[20],n,temp,i,k,b;
    printf("Enter size of the array: ");
    scanf("%d",&n);

    printf("Enter elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(b=0;b<n-1;b++)
    {
        for(k=0;k<n-1;k++)
        {
            if (a[k]>a[k+1])
            {
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}