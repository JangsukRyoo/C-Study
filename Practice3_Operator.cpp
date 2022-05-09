#include <stdio.h>
//예제 비트연산  
/* int main(void)
{
	
	int num1 = 15; 
	int num2 = 10;
	int sum = num1 ^ num2;
	
	printf("XOR 연산 결과: %d \n", num1 ^ num2);
	 
	return 0;
}
*/

//Not연산자  
// int main(void)
//{
//	int num1 = 15; 
//	int num2 = ~num1;
//	
//	printf("NOT 연산 결과: %d \n", num2);
//	 
//	return 0;
//}

//shitf 연산자 num1 << num2 9<<2 왼쪽에서 이동하겠다.
// int main(void)
//{
//	int num = 15; 
//	int result1 = num <<1;
//	int result2 = num <<2;
//	int result3 = num <<3;
//	
//	printf("1칸이동  %d \n", result1);
//	printf("2칸이동  %d \n", result2);
//	printf("3칸이동  %d \n", result3);
//	
//	//30, 60 120 임
//	//10진수는 한칸씩 마다 한자리수가 바뀜 
//	//2진수 입으로 한칸이동이 2배 4배 8배  
//	 
//	return 0;
//} 

//오른쪽 으로 이동 >> 
// int main(void)
//{
//	int num = -16;
//	
//	printf("2칸이동  %d \n", num >>2);
//	printf("3칸이동  %d \n", num >> 3);
//	//2로 나누기가 됨  
//	return 0;
//} 


//퀴즈  1
 int main(void)
{
	int num = 4;
 	 num  = num <<2;
 	 
 	 printf("%d", num);

	return 0;
}

//퀴즈 2 
// int main(void)
//{
//	int num;
//	
//	printf("정수 입력: ");
//	scanf("%d", &num);	
//	
//	num = num <<4;
//	num = num >>2;
//
//	printf("%d \n", num); 
//	return 0;
//} 

// 16진수는 알파벳 A F가지 사용하도록 한다 
//
//정수를 저장할때 가장 오르쪽에 존재하는 비트는 가장 중요하게 다루어지는 MSB이며, 이곳에서 +또는 ?를 나타내는 부호 정보가 저장된다.
// X
// MSB 가장 왼쪽임 부호를 나타냄 0 = 양수 1=음수
// MSB를 제외한 나머지는 비트 크기를 나타냄 
// 
// 정수를 저장할대 1 -1은 MSB에서 위치에서 다른값을 가지고 나머지 미트에서는 같은값을 가짐 
// X
// 
//실수를 표현하는 가장 좋은 방법은 소수점 이상 부분과 소수점 이하 부분을 각각 나누어서 따로 저장하는 것이다.
//X 
//
//컴퓨터에서 실수를 저장할때 오차는 발생하지 않는다.
//X


 
