 #include <stdio.h>

//기본 자료형 
//  int main(void)
//{
//	int i = 2147483647;
//	
//	printf("%d %d %d \n", i, i+1, i+2);
//	
//	return 0;
//	 
//}

//  int main(void)
//{
//	double num1, num2;
//	
//	scanf("%lf %lf", &num1, &num2);
//	
//	printf("두 수의 덧셈: %f \n", num1  +num2);
//	printf("두 수의 뺄셈: %f \n", num1 - num2);
//	printf("두 수의 곱셈: %f \n", num1  *num2);
//	printf("두 수의 나눗셈: %f \n", num1 / num2);	
//	
//	return 0;	 
//}  


 //아스키 코드 예제 
// int main(void)
//{
//	int num;
//	
//	printf("정수 입력: ");
//	scanf("%d", &num);	
//	printf("결과 출력 : %c \n", num);
//	//반대도 가능 
//	printf("결과 출력 : %d \n", num); 
//	return 0;
//} 

// F 접미사  
//  int main(void)
//{
//
//	float num1 = 3.14;
//	float num2 = 3.14f;
//	float num3 = 3.1fF + 4.32F;
//	
//	return 0;
//}

// const 상수 
//  int main(void)
//{
//	const int MAX = 10; //MAX는 상수 변경불가 
//	const double PI = 3.14; //PI는 상수 값 변경 불가 
//	
//	const int MIN; //쓰레기 값으로 초기화됨 
//	MIN =0;   //값 변경 불가. 
//	return 0;
//}  
  
//  //자동 형 변환 : 예제 
//  int main(void)
//{
//	double num1 = 100; //100.0으로 자동 저장 
//	int num1 = 3.14; // double형 정수를  int형으로 자동 저장  
//	int num3 = 129;
//	char ch = num3;  //int 형 변수를 char으로 자동 변환해서 저장 
//	
//	return 0;
//} 
//int -> long -> long long -> float -> double -> long double실수로 형태로 바뀌어야지 손실이 적음  
//
// 자동 형변 
//  int main(void)
//{
//
//	int num1 = 3, num2= 4;
//	double divResult1, divResult2;
//	
//	divResult1 = num1 / num2;
//	divResult2 = (double)num1 /num2;
//	
//	printf("1번째 나눗셈 결과: %f \n", divResult1);
//	printf("2번째 나눗셈 결과: %f \n", divResult2);
//	
//	return 0;
//} 

//  int main(void)
//{
//	int a = (2+3) +6;
//	int b = (12 + 6) / 2+3;
//	int c  = (2 +3)/4;
//	int d = 3 + 2 + (7/2);
//	int e = (int) 3.8 +3.3;
//	
//	printf("a = %d \n",a);
//	printf("b = %d \n",b);
//	printf("c = %d \n",c);
//	printf("d = %d \n",d);
//	printf("e = %d \n",e);
//	
//	return 0;
//}

//  int main(void)
//{
//	float f;
//	f =10/3;
//	printf("%f\n", f);
//	return 0;
//}

//printf / scanf 
//  int main(void)
//{
//	// %d 10진수 %o 8진수 %x 16진수
//	 
//	int num1 = 3, num2 = 10;
//	
//	printf("%o %#o, \n", num1, num1);
//	printf("%x %#x, \n", num2, num2);
//	
////	%7s 7칸을 확보 오른쪽 정렬
////	%-7s 7칸 확보, 왼쪽 정렬 
//	printf("%7s %10s %7s\n", "이 름", "전 공", "학번");
//	printf("%7s %10s %7s\n", "홍길동", "건축", "11");
//	 
//	return 0;
//}



//  int main(void)
//{
//	float f;
//	f =10/3;
//	printf("%f\n", f);
//	return 0;
//}

















