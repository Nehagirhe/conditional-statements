#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter firsr value:");
	scanf("%d",&a);
    printf("\nenter second value:");
	scanf("%d",&b);
	printf("\nenter third value:");
	scanf("%d",&c);
	if(a>b && a>c)
     	printf("\nThe 1st Number Is The Greatest Among Three.");
    if(b>a && b>c)
     	printf("\nThe 2nd Number Is The Greatest Among Three.");
	if(c>a && c>b)
	 	printf("\nThe 3rd Number Is Greatest Among Three.");	
	if(a==b && a==c)
	printf("\nThe 1st 2nd And 3rd Numbers Are Same.");
	return 0;
}
