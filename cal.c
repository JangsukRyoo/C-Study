#include <stdio.h>

//연산자 

//int main(void){
//	
//	int result;
//	int num1, num2,  num3;
//	
//	printf("정수 3개 입력: ");
//	
//	scanf("%d %d %d", &num1 ,&num2, &num3);
//	
//	result = num1 + num2 + num3;
//	
//	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
//	
//	return 0;
//} 
// 

//quiz
int main(void){
	
	int num1, num2;
	int result;
	
	printf("정수 2개 입력: ");
	
	scanf("%d %d", &num1, &num2);
	
	printf("%d + %d = %d \n", num1, num2, num1+num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d * %d = %d \n", num1, num2, num1*num2);
	printf("%d / %d = %d \n", num1, num2, num1/num2);
	
	return 0;
	
	
	
}
