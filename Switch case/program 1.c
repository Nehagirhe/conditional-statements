#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char operation;
	double n1,n2;
	printf("Enter An Arithmetic Operation: ");
	scanf("%c",&operation);
	printf("Enter Two Operands: ");
	scanf("%lf %lf",&n1,&n2);
	switch (operation)
	{
	case'+':
			printf("%.1lf+ %.1lf=%.1lf",n1,n2,n1+n2);
			break;	
	case'-':
			printf("%.1lf - %.1lf=%.1lf",n1,n2,n1-n2);
			break;
	case'*':
			printf("%.1lf* %.1lf=%.1lf",n1,n2,n1*n2);
			break;
	case'/':
			printf("%.1lf/ %.1lf=%.1lf",n1,n2,n1/n2);
			break;	
	default:
	printf("Error! operation is not correct");
			
	}
	return 0;
}
