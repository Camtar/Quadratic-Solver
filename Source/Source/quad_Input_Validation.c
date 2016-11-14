#include <stdio.h>
#include "structDec.h"
Inputs quad_Input_Validation(){
	int scanFReturn = 0;
	double a,b,c;
	Inputs inputs;
    printf("Enter coefficients a, b and c: \n");
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter a: ");
		scanFReturn = scanf("%lf",&a);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter a again.\n"); 
		}
		scanf("%*c");
	}
	scanFReturn = 0;
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter b: ");
		scanFReturn = scanf("%lf",&b);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter b again.\n"); 
		}
		scanf("%*c");
	}
	scanFReturn = 0;
	while(scanFReturn == 0 || scanFReturn > 1){
		printf("Enter c: ");
		scanFReturn = scanf("%lf",&c);
		if(scanFReturn == 0 || scanFReturn > 1){
			printf("\nNot a valid value. Please Enter c again.\n"); 
		}
		scanf("%*c");
	}
	inputs.a = a;
	inputs.b = b;
	inputs.c = c;
	return inputs;
}