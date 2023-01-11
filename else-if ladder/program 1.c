#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	if(age>18)
	printf("Congratulations!! You Are Eligible For Casting Your Vote.");
	else if(age==18)
	printf("Sorry!! Wait Just One Year.");
	else if(age <18)
	printf("Sorry!! You Are Not Eligible For Casting Your Vote.");
    else
    printf("It Is Not In My Condition");
	return 0;
}
