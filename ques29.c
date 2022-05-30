#include <stdio.h>
 #include<string.h>
int main()
{
  	char a[100], b[100];
  	int i, j, F;
	  int m=strlen(a);
 
  	printf("\n Please Enter any String :  ");
  	scanf("%[^\n]",a);
  	
	printf("\n Please Enter the Word that you want to Search for :  ");
    char c;
    scanf("%c",&c);
  scanf("%[^\n]",b);
	     	   	
  	for(i = 0; a[i] != '\0'; i++)
	{
		if(a[i] == b[0])
		{
			F = 1;
			for(j = 0; b[j] != '\0'; j++)
			{
				if(a[i + j] != b[j])
				{
					F = 0;
					break;
				}
            }
        }
        if(F==1){
			a[i]=a[i-1];
			m--;
            break;
        }
        }
        if(F==1){
            printf("%s",a);
        }
    }