#include <stdio.h>

int main()
{
  int num;
  int i,j,row,col,counter = 0;
  int m,n,k;
  int array[10][10];
  int max, temp;
  scanf("%d",&num);
  while(counter < num){
    max = 0;
    scanf("%d %d %d",&m,&n,&k);
    //get graph
    for(i = 0; i < m; i++)
      for(j = 0; j < n; j++)
        scanf("%d",&array[i][j]);
    for(i = 0; i < (m-k)+1; i++){
      for(j = 0; j < (n-k)+1; j++){
        temp = 0;
        for(row = i; row < i + k; row++)
          for(col = j; col < j + k; col++)
            temp += array[row][col];
        if(temp > max)
          max = temp;
      }
    }
    printf("%d\n",max); 
  }
  return 0; 
}