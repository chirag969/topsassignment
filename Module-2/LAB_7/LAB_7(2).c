#include<stdio.h>
main(){
	int num,i=1,sum=0;
	
	printf("Enter The Number: ");
	scanf("%d",&num);
	
	while(i<=num){
		sum=sum+i;
		i=i+1;
	}
printf("Sum Of Natural Number is=%d\n",sum);
}
