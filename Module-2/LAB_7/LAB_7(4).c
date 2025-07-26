#include<stdio.h>
main(){
	int number[5],i;
		printf("Enter 5 Numbers: ");
		
	for (i=0;i<5;i++){
	scanf("%d",&number[i]);
	}
	printf("Numbers In Revers Order: \n");
	for(i=4;i>=0;i--){
		printf("%d ",number[i]);
	}
}
