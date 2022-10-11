#include <stdio.h>
int binarysearch(int a[],int n,int data)
{
  int l=0,r=n-1,mid;
  while(l<=r)
    {
      mid = (l+r)/2;
      if(a[mid]==data)
      {
        return mid;
      }
      else if(data < a[mid])
      {
        r = mid-1;
      }
      else
      {
        l = mid+1;
      }
      
    }
  return -1;
}

int main()
{
  int a[20],n,i,data;
  printf("Enter size of the array: ");
  scanf("%d",&n);
  printf("Enter elements: ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter element you want to search: ");
  scanf("%d",&data);
  int result = binarysearch(a, n, data);
  if (result == -1)
  {
    printf("Element not found");
  }
  else
  {
    printf("Element found at index %d", result);
  }
  return 0;
}