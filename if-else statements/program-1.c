// C Program To Check Whether A Number Is Even Or Odd

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("enter any number: ");
	scanf("%d",&a);
	if(a%2==1)
	printf("%d is an odd integer.",a);
	else
	printf("\n%d is an even integer.",a);
	return 0;
}
