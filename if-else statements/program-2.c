#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a>0)
	printf("%d is a positive number.",a);
	else
	printf("%d is a negative number.",a);
	return 0;
}
