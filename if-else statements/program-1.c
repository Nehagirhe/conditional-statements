// C Program To Check Whether A Number Is Even Or Odd

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a;
	printf("enter any number: ");
	scanf("%d",&a);
	if(a%2==1)
	printf("%d is an odd integer.",a);
	else
	printf("\n%d is an even integer.",a);
	return 0;
}
