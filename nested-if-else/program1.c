#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int phy,chem,maths,total;
	printf("enter your physics marks:");
	scanf("%d",&phy);
	printf("enter your chemistry marks:");
	scanf("%d",&chem);
	printf("enter your mathematics marks:");
	scanf("%d",&maths);
	total=maths+phy+chem;
	if(total>=180)
	{
		if(maths>=65  && phy>=55  &&chem>=50)
		printf("The Candidate is Eligible For Admission.");
		else
		printf("The Candidate is Not Eligible For Admission.");
	}
	else
	{
		if(maths>=65 &&total>=140)
		printf("The Candidate is Eligible For Admission With Mathematics.");
		else
		printf("The Candidate is Not Eligible For Admission.");
	}
	return 0;
}
