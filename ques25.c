#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    char k;
    int e = strlen(a);
    for(int i=0;a[i]!=0;i++){
        for(int j=i+1;a[j]!=0;j++){
            if(a[i]==a[j]){
                for(int k=j;a[k]!=0;k++){
                    a[k]=a[k+1];
                }
            }
        }
    }
    printf("%s",a);
     return 0;
}