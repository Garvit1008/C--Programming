// #include<stdio.h>
// int main(){
//     int n,i,max1,max2,min1,min2;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>max1){
//             max2=max1;
//             max1=a[i];
//         }
//         else if(a[i]>max2&&a[i]<max2){
//             max2=a[i];
//         }
//     }
//     printf("%d",max2);
// }
#include<stdio.h>
int main(){
    int n,i,min1,min2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2&&a[i]>min1){
        min2=a[i];
        }
           }
            printf("%d",a[i]);
}