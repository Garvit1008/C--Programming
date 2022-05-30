// #include<stdio.h>
// int main(){
//     int a=10,b=20;
//     int *p,*q;
//     p=&a;
//     *q=*p;
//     printf("%d\n",&p);
//     printf("%d\n",*p);
//     printf("%d\n",&q);
//     printf("%d\n",*q);
//     printf("%d\n",p);
//     printf("%d\n",q);
//     int **pp;
//     pp=&p;
//     printf("%d",pp);
// return 0;
// }
	#include<stdio.h>  
	void main ()  
	{  
	    int a[10] = {100, 206, 300, 409, 509, 601}; //Line 1  
	    int *p[] = {a, a+1, a+2, a+3, a+4, a+5}; //Line 2 
	    int **pp = p; //Line 3 
		printf("%d\n",&a);  
		printf("%d\n",p);
		printf("%d\n",pp); 
	printf("%d\n",*p);
	}