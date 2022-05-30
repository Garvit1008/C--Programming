#include<stdio.h>
int main(){
    char a[100];
    char *p=a;
    scanf("%[^\n]",a);
    for(int i=0;a[i]!=0;i++){
        printf("%c",*(p+i));
    }
return 0;
}