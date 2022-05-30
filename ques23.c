#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    char k;
    scanf("%c",&k);
    char d;
    scanf("%c",&d);
    int e = strlen(a);
    for(int i=e-1;i>0;i--){
        if(a[i]==d){
            for(int j=i;a[j]!='\0';j++){
   
                a[j]=a[j+1];
                
            }
            break;
        }
    }
    printf("%s",a);
     return 0;
}