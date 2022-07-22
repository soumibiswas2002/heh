#include <stdio.h>

int main()
{
  int arr[100], srch, i, n;

  printf("Enter number of elements in array : ");
  scanf("%d", &n);

  printf("\nEnter %d integer : ", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("\nEnter a number to search : ");
  scanf("%d", &srch);

  for (i = 0; i < n; i++)
  {
    if (arr[i] == srch)    /* If required element is found */
    {
      printf("%d is present at location %d \n", srch, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d isn't present in the array.\n", srch);

  return 0;
}
