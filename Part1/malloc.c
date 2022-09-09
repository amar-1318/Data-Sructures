#include <stdio.h>
#include <stdlib.h>
int main()
{
  // int n;
  // printf("Enter The size of array\n");
  // scanf("%d",&n);
  // int arr[n];
  // for(int i=0;i<n;i++){
  //     printf("The value of arr[%d]\n",i);
  //     scanf("%d",&arr[i]);// But this is wrong way of allocation cause the expression must have constant value
  // }
  // for(int i=0;i<n;i++){
  //     printf("The value of arr[%d] is %d\n",i,arr[i]);
  // }

  //---------------This is why we have to chose dynamic memory over static allocation------------------
  //------------------------In dynamic we can allocate memory in run time------------------------------


  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  int *ptr;
  ptr = (int *)malloc(n * sizeof(int));
  //In c++ language we dont have to write this all
  //All we have to write is new rectangle only
  // ptr = new rectangle 
  for (int i = 0; i < n; i++)
  {

    printf("enter the value no %d of this array\n", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    printf("The value of ptr[%d] is %d\n", i, ptr[i]);
  }
  free(ptr);

  return 0;
}