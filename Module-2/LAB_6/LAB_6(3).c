#include<stdio.h>
main(){

	int num, rev=0;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	while(num != 0){
		rev = rev*10 + num %10;
		num = num / 10;
	}
	printf("Reserved Number=%d",rev);
}

