#include<stdio.h>
int main(){
    char a[200];
    int c=0;
     scanf("%[^\n]",a);
     for(int i=0;a[i]!=0;i++){
         c++;
     }
     printf("%d",c);
}