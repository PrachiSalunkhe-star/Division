// write a function to perform division of two numbers. Return result via out parameter and return value indicates the error (due to zero denominator)

#include<stdio.h>

int division(int num1,int num2,int out);

int main(void)
{
	int num1,num2,result;
	int out=0;
	printf("Enter two number:");
	scanf("%d %d",&num1,&num2);
	
	result=division(num1,num2,out);
	
	printf("\n Division:%d",result);

	return 0;
}

int division(int num1,int num2, int out)
{
	if(num2!=0)
	{
		int res= num1/num2;
		out = res;
		return out;
	}
	else
	{
		printf("Divide by zero error");
		return 0;
	}
}