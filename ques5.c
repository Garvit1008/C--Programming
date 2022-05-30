#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int *even;
    int arr[n];
    even =arr;
    int c=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(*(even+i)%2==0){
            printf("%d ",*(even+i));
            c++;
           
        }
    }
    printf("\n");
    printf("%d",c);
return 0;
}