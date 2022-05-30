// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int*p=arr;
//     for(int i=0;i<n;i++){
//         scanf("%d",(p+i));
//     }
//     int n1;
//     scanf("%d",&n1);
//     for(int i=0;i<n;i++){
//         if(*(p+i)==n1){
//             printf("element found at %d index",i);
//         }
//     }
// return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    int n1;
    scanf("%d",&n1);
    for(int i=0;i<n;i++){
        if(*(p+i)==n1){
            for(int j=i;j<n;j++){
                *(p+j)=*(p+j+1);
            }
            n--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
return 0;
}