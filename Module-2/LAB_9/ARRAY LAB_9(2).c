#include<stdio.h>
main(){
	int numbers[10];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter The Number %d: ",i+1);
		scanf("%d", &numbers[i]);
	}
	printf("You Entered: \n");
	for(i=0;i<5;i++){
		printf("%d\n",numbers[i]);	
	}
}

