#include<stdio.h>
int  minmax(int arr[],int *min,int *max,int n){
    *min=*max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>*max){
            *max=arr[i];
        }
        if (arr[i]<*min){
            *min=arr[i];
        }
    }
}
int main(){
    int n;
    int min,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    minmax(arr,&min,&max,n);
    printf("%d %d",min,max);
return 0;
}
