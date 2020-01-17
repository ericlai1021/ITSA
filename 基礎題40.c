#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
		char C[10];
		int code[10];
		int i;

		scanf("%c %c %c %c %c %c %c %c %c %c",&C[0],&C[1],&C[2],&C[3],&C[4],&C[5],&C[6],&C[7],&C[8],&C[9]);
		for(i=0; i<10; i++)
		{
				if(C[i] == 'X') code[i] = 10;
				else code[i] = C[i]-48;
				if(i != 0)
				{
						code[i] += code[i-1];
				}
		}
		for(i=1; i<10; i++)
		{
				code[i] += code[i-1];
		}
		if(code[9]%11 == 0) printf("YES\n");
		else printf("NO\n");
}
