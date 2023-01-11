#include <stdio.h>
#include <stdlib.h>

int main()
{
int time;
printf("Enter The time:");
scanf("%d",&time);
if(time>0 && time<=3)
{
	printf("Good Night!!");}
	else if(time>3 && time<12){
	printf("Good Morning!!");
	}
	else if(time>12 && time<=15)
	{
	printf("Good Afternoon!!");
}
else if(time>15 && time<20)
{
	printf("Good Evening!!");
}
else if(time>20 && time<=24){
	printf("Good Night!!");
}
else{
printf("Unknown Time!");}
}
