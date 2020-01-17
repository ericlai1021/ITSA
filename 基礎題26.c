#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
  
void main()  
{  
        int num[64], total[64]={0};  
        int n, i, j, tmp;  
  
        scanf("%d",&n);  
        for(i=0; i<n; i++)  
        {  
                scanf("%d", &num[i]);  
                tmp = num[i];  
                while(tmp != 0)  
                {  
                        total[i] += tmp%10;  
                        tmp /= 10;  
                }  
        }  
        for(i=0; i<n-1; i++)  
        {  
                for(j=0; j<n-1-i; j++)  
                {  
                        if(total[j] > total[j+1])  
                        {  
                                tmp = num[j];  
                                num[j] = num[j+1];  
                                num[j+1] = tmp;  
                                tmp = total[j];  
                                total[j] = total[j+1];  
                                total[j+1] = tmp;  
                        }  
                        else if(total[j] == total[j+1])  
                        {  
                                if(num[j] > num[j+1])  
                                {  
                                        tmp = num[j];  
                                        num[j] = num[j+1];  
                                        num[j+1] = tmp;  
                                        tmp = total[j];  
                                        total[j] = total[j+1];  
                                        total[j+1] = tmp;  
                                }  
                        }  
                }  
        }  
  
        for(i=0; i<n; i++)  
        {  
                printf("%d", num[i]);  
                if(i != n-1) printf(" ");  
        }  
        printf("\n");  
}  