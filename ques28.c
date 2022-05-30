#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    char c;
    scanf("%c",&c);
    char d;
    scanf("%c",&d);
    char e;
    scanf("%c",&e);
    char f;
    int l=strlen(a);
    int w;
    scanf("%c",&f);
    for (int i =l-1;i>0;i--){
        if(a[i]==d){
            a[i] = f;
            }
        }
    printf("%s",a);
}