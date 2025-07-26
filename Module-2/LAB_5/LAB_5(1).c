#include<stdio.h>
main(){
	int num;
	int month,number;
	
	// check the number is Even num or Odd num
	printf("Enter a number: ");
	scanf("%d" , &num);
		//(condition)?():();
	
	(num %2 == 0) ?
	printf("Even number\n"): printf("Odd number\n");
	
	// check the month name by month number 
	printf("Enter the number of the month: ");
	scanf("%d", &month);
	
	switch(month){
		case 1: printf("Month Is :JANUARY\n");
		break;
		case 2: printf("Month Is:FEBRUARY\n");
		break;
		case 3: printf("Month Is:MARCH\n");
		break;
		case 4: printf("Month Is:APRIL\n");
		break;
		case 5: printf("Month Is:MAY\n");
		break;
		case 6: printf("Month Is:JUNE\n");
		break;
		case 7: printf("Month Is:JULY\n");
		break;
		case 8: printf("Month Is:AUGUST\n");
		break;
		case 9: printf("Month Is:SEPTEMBER\n");
		break;
		case 10: printf("Month Is:OCTOBER\n");
		break;
		case 11: printf("Month Is:NOVEMBER\n");
		break;
		case 12: printf("Month Is:DECEMBER\n");
		break;
	}
}

