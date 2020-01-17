#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
void main()  
{  
        int num, i;  
        int ans = 0;  
  
        scanf("%d",&num);  
        for(i=1; i<=num; i++)  
        {  
                if(i%3 == 0)  
                {  
                        ans += i;  
                }  
        }  
        printf("%d\n",ans);  
}  