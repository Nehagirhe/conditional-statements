#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	printf("enter your age: ");
	scanf("%d",&age);
	if(age>18)
	printf("Congratulations!!!You Are Eligible For Casting Your Vote.");
	else if(age<18)
	printf("Sorry!!! You Are Not Eligible for Casting Your Vote.");
	else if(age==18)
	printf("Sorry!! WAit Just One Year.");
	return 0;
}
