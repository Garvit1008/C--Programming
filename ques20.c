/* C Program to Find Maximum Occurring Character in a String */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len;
    int max = 0;
     
    int freq[256] = {0}; 
  
    printf("\n Please Enter any String :  ");
    scanf("%[^\n]",str);  
    len = strlen(str);
     
    for(i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }
         
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > freq[max])
        {
            max = i;
        }
    }
    printf("\n Character '%c'- %d ", max, freq[max]);
     
    return 0;
}