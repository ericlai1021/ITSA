#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
int f(int n)  
{  
        int tmp;  
  
        if(n<=1)  
        {  
                return n+1;  
        }  
        else  
        {  
                return f(n-1) + f(n/2);  
        }  
}  
  
void main()  
{  
        int n, ans;  
  
        scanf("%d", &n);  
        ans = f(n);  
  
        printf("%d\n", ans);  
}  