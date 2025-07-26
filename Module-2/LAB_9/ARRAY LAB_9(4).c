#include<stdio.h>
main(){
	int number[5],x,max=0,digit;
	int temp;
	for(x=0;x<5;x++){
	printf("Enter The Number%d : ",x+1);
	scanf("%d",&number[x]);
	}
	for(x=0;x<5;x++){
		temp = number[x];
	while(temp>0){
		digit = temp % 10;
		if (digit>max)
			max=digit;
			temp =temp/10;
	}
		}
		printf("Maximum Digit Is: %d",max);
	}
	

