#include<stdio.h>
main(){
printf("\t ANSWER A");
	int num,digit,count=0;   	
	printf("Enter Number: ");
	scanf("%d", &num);
if (num==0){
	count=1;
} 
else {
	while (num!=0){
		digit = num%10;
		if(digit%2==0){
			count++;
		}
		num =num/10;

	}
}
	printf("Tota Even Digits Are : %d",count);
	
printf("\t ANSWER B");
	int  num,digit,count=0;   	
	printf("Enter Number: ");
	scanf("%d", &num);
if (num==0){
	count=0;
} 
else {
	while (num!=0){
		digit = num%10;
		if(digit% 2 !=0){
			count++;
		}
		num =num/10;
	}
}
	printf("Total Odd Digits Are : %d",count);
printf("\t ANSWER C")

	int num,digit,count=0,sum=0;   	
	printf("Enter Number: ");
	scanf("%d", &num);
if (num==0){
	count=1;
} 
else {
	while (num!=0){
		digit = num%10;
		if(digit%2==0){
			count++;
			sum += digit;
		}
		num =num/10;
	}
}
	printf("Tota Even Digits Are : %d\n",count);
	printf("Sum Of Even DIgit Is:%d\n",sum);
	int num,digit,count=0,sum=0;   
printf("\t ANSWER D")	
	printf("Enter Number: ");
	scanf("%d", &num);
if (num==0){
	count=0;
} 
else {
	while (num!=0){
		digit = num%10;
		if(digit% 2 !=0){
			count++;
			sum+=digit;
		}
		num =num/10;
	}
}
	printf("Total Odd Digits Are : %d\n",count);
	printf("Sum Of Odd Numbers Is: %d\n",sum);
	}

