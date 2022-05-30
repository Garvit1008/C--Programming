#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int f=1;
    int *ptr=&f;
    for(int i=1;i<=n;i++){
      *ptr=*ptr*i;
    }
    printf("%d",*ptr);
return 0;
}