#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i;
    scanf("%[^\n]",a);
    char b;
    scanf("%c",&b);
    char c[100];
    scanf("%[^\n]",c);
    int f =0;
    int l=strlen(a);
    for(int i=0;a[i]!=0;i++){
        if(a[i]==c[0]){
            f=1;
            for(int j=l-1;j>0;j--){
                if(a[i+j]!=c[j]){
                    f=0;
                    break;
                }
            }
        }
        if(f==1){
            a[i]=a[i+1];
            i--;
            break;
        }
    }
    if(f==0){
        printf("sorry");
    }
    else{
        printf("%d",i);
    }
return 0;
}