#include <stdio.h>

int main(){
	//Declaration of variables for simple calculator
	int a=0,b=0,y=0;
	char operator='0';
	char add='+',sub='-',mul='*',div='/';
	//Enter the value of variables
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the Operator:");
	scanf(" %c",&operator);
	//Arithematic operations using if statements!
	if(operator==add){
	y=a+b;
	}
	else{
	if(operator==sub){
	y=a-b;
	}
	else {
	if(operator==mul){
	y=a*b;
	}
	else {
	if(operator==div)
	y=a/b;
	}
}
}

    //Output result
    printf("The value of %d%c%d is %d",a,operator,b,y);
    return 0;
}
