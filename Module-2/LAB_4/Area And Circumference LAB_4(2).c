#include<stdio.h>
  main(){
	float circleAera,radius;
	float pi=3.14;
	float circumFerence;
	
	printf("\nFIND THE AREA OF CIRCLE");
printf("\n Enter the value of radius circle: ");
scanf("%f",&radius);
circleAera=pi*radius*radius;
printf("Aera of circle =%.2f\n",circleAera);
	printf("\n FIND THE CIRCUM FERENCE OF CIRCLE");
printf("\n Enter the value Of radius circle: ");
scanf("%f",&radius);
circumFerence=2*pi*radius;
printf("Circum Ference Of Circle Is=%2f\n",circumFerence);

}
		
