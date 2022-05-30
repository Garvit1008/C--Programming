
// length of a string
// #include<stdio.h>
// int main() {
//   char str[20], *pt;
//   int i = 0;
//   scanf("%[^\n]",str);
//   pt = str;
//   while (*pt != 0) {
//     i++;
//     pt++;
//   }
//   printf("Length of String : %d\n", i);
//   return 0;
// }

// reverse of a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100];
//     scanf("%[^\n]",a);
//     int c=strlen(a);
//     char *pt;
//     int i=0;
//     pt =a;
//     int d=0;
//     char b[122];
//     for(int i=c;i>=0;i--){
//         printf("%c",*(pt+i));
//     }
// }


// count a character
// #include<stdio.h>
// int main(){
// char a[200];
// scanf("%[^\n]",a);
// char *ptr;
// ptr=a;
// int b=0;
// char k;
// scanf("%c",&k);
// char w;
// scanf("%c",&w);
// int i=0;
// for(int i=0;*(ptr+i)!=0;i++){
//     if(*(ptr+i)==w){
//         b+=1;
//     }
// }
// printf("%d",b);
// }

#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]",a);
    char b[100];
    char *p;
    p=b;
    int d;
    char *ptr;
    ptr =a;
    int c=strlen(a);
    int l=0;
    for(int i=c-1;i>=0;i--){
        *(p+l)=*(ptr+i);
        l++;
    }
    int f=0;
    for(int i=0;*(p+i)!=0;i++){
        if(*(p+i)!=*(ptr+i)){
            f=0;
            break;
        }
        else{
            f=1;
            break;
        }
    }
if(f==1){
    printf("palindrome");
}
}