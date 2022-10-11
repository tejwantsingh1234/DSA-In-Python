#include <stdio.h>
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

  for(i=0;i<n;i++)
    {
      if (a[i] == data)
      {
        printf("Element found at index: %d",i);
        break;
      }
    }
  if (i==n)
  {
    printf("Element not found");
  }
  return 0;
}