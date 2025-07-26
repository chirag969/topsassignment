#include<stdio.h>
main(){
	int num,i,multi=1;
	
	printf("Enter The Number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		multi*=i;
	}
	printf("%d",multi);
}
