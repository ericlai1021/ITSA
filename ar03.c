#include <stdio.h>

int main()
{
  int array[6];
  int result = 0;
  int i;
  for(i = 0; i < 6; i++){
    scanf("%d",&array[i]);
    result += array[i] * array[i] * array[i];
  }
  printf("%d\n",result);
  return 0;
}