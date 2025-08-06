#include<stdio.h>
main(){
	int i, rev=0;
	 printf("\n Enter The Number : ");
	 scanf("%d",&i);
	 while (i>0)
	 {
	 	rev=(rev*10)+i%10;
	 i=	i/10;
	 	
	 }
	 printf("\n Reverse = %d",rev);
}
