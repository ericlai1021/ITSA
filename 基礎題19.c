#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
#include<ctype.h>  
  
void main()  
{  
        int num;  
        scanf("%d", &num);  
  
        int S[num], D[num];  
        int i, j, cnt;  
        int tmp = 0;  
        for(i=0; i<num; i++)  
        {  
                scanf("%d %d",&S[i], &D[i]);  
        }  
        cnt = num;  
        for(i=0; i<num-1; i++)  
        {  
                for(j=tmp+1; j<num; j++)  
                {  
                        if(D[i] <= S[j])  
                        {  
                                cnt--;  
                                tmp = j;  
                                break;  
                        }  
                }  
        }  
        printf("%d\n", cnt);  
}  