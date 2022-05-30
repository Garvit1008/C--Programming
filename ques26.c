#include<stdio.h>
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
    int g;
    int w;
    scanf("%c",&f);
    for (int i =0;a[i]!=0;i++){
        if(a[i]==d){
            a[i] = f;
            break;
            }
        }
    
    printf("%s",a);
}
// // hello
// // le
// // hlelo
// #include<stdio.h>
// int main(){
//     char a[100];
//     scanf("%[^\n]",a);
//       char c;
//     scanf("%c",&c);
//     char d;
//     scanf("%c",&d);
//     char e;
//     scanf("%c",&e);
//     char f;
//     scanf("%c",&f);
//     char g;
//     int w,v;
//     int x;
//     for(int i=0;a[i]!=0;i++){
//         if(a[i]==d){
//             w=i;
//             if(a[i]==f){
//                 v=i;
//                 char s=a[w];
//                 a[w]=a[v];
//                 a[v]=s;
//             }
//         }
//     }
//     printf("%s",a);
// }