#include<stdio.h>
main(){
	int cp,sp;
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	printf("Enter the selling price: ");
	scanf("%d" ,&sp);
	if(sp>cp){
		printf("Profit =%d",sp-cp);
	}
	else if (cp>sp){
		printf("Loss = %d",cp-sp);
	}
	else{
		printf("No profit No loss");
	}	
	}

