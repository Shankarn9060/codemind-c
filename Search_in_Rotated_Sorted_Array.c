#include <stdio.h>
#define ARRAY_SIZE(arr) sizeof(arr)/sizeof(arr[0])
int SearchTargetValue(int arr[], int lowIndex, int highIndex, int target)
{

   if (lowIndex > highIndex)
   return -1;
   int mid = (lowIndex + highIndex) / 2;

    if (arr[mid] == target)
    return mid;
    if (arr[lowIndex] <= arr[mid])
{
   if (target >= arr[lowIndex] && target <= arr[mid])
   return SearchTargetValue(arr, lowIndex, mid - 1, target);

   return SearchTargetValue(arr, mid + 1, highIndex, target);
}
  if (target >= arr[mid] && target <= arr[highIndex])
  return SearchTargetValue(arr, mid + 1, highIndex, target);
  return SearchTargetValue(arr, lowIndex, mid - 1, target);
}
   int main()
{

   int x,i;
   scanf("%d",&x);
   int arr[x];
   for(i=0;i<x;i++)
{
    scanf("%d",&arr[i]);
}
   int targetElement;
   scanf("%d",&targetElement);
   int arr_size = ARRAY_SIZE(arr);
   const int indexTarget = SearchTargetValue(arr, 0, arr_size-1,targetElement);
   if(indexTarget != -1)
{

   printf("%d",indexTarget);
}
   else
{
   printf("-1");
}

   return 0;
}