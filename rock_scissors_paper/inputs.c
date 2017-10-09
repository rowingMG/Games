#include <stdio.h>
#include "inputs.h"
//하나의 정수만을 리턴하고 버퍼를 비우는 함수
int get_int(void)
{
	int output;
	
	while(scanf("%d", &output) != 1)
	{
		while(getchar() != '\n')
			continue;
		printf("Enter an integer: ");
	}
	while(getchar() != '\n')
		continue;
	
	return output;
}

//하나의 float 값만을 리턴하고 버퍼를 비우는 함수
float get_flt(void)
{
	float output;
	
	while(scanf("%f", &output) != 1)
	{
		while(getchar() != '\n')
			continue;
		printf("Enter an number: ");
	}
	while(getchar() != '\n')
		continue;
	
	return output;
}

//하나의 double 값만을 리턴하고 버퍼를 비우는 함수
double get_dbl(void)
{
	double output;
	
	while(scanf("%lf", &output) != 1)
	{
		while(getchar() != '\n')
			continue;
		printf("Enter an number: ");
	}
	while(getchar() != '\n')
		continue;
	
	return output;
}

//개행 문자 이후의 첫번째 char 값만 리턴하고, 버퍼를 비우는 함수
char get_first(void)
{
	char output;
	
	while((output = getchar()) == '\n')
		continue;
	while(getchar() != '\n')
		continue;
	
	return output;
}