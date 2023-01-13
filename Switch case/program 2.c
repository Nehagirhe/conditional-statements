#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int day=2;
switch (day){
case 1:
printf("MONDAY");
break;
case 2:
printf("TUESDAY");
break;
case 3:
printf("WEDNESDAY");
break;
case 4:
printf("THURSDAY");
break;
case 5:
printf("FRIDAY");
break;
case 6:
printf("SATURDAY");
break;
case 7:
printf("SUNDAY");
break;
default:
	printf("Looking forward to the Weekend");
	
}

	return 0;
}
