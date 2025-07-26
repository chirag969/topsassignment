#include<stdio.h>
main(){
	int squareArea,length;
	int cubeArea,side;
	float triangleArea,base,height;
	
	printf("FIND AREA OF SQUARE\n");
	printf("\nEnter The Value Of Length: ");
	scanf("%d",&length);
	squareArea=length*length;
	printf("Area Of Square=%d\n",squareArea);
	
	printf("FIND AREA OF CUBE\n");
	printf("\nEnter The Value Of Side: ");
	scanf("%d",&side);
	cubeArea=6*side*side;
	printf("Area Of Cube=%d\n",cubeArea);
	
	printf("FIND AREA OF TRIANGLE\n");
	printf("\nEnter The Value Of Base: ");
	scanf("%f",&base);
	
	printf("\nEnter The Value Of Height: ");
	scanf("%f",&height);
	triangleArea=base*height/2;
	printf("Area Of Triangle=%f\n",triangleArea);

	}

