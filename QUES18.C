#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i;
    int *max,*min;
    *max=*min=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>*max){
            *max=a[i];
        }
        else if(a[i]<*min){
            *min=a[i];
        }
    }
    printf("%d",max);
return 0;
}