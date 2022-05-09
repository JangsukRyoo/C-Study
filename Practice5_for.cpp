 #include <stdio.h>

//구구단  
//  int main(void)
//{
//	int dan, i;
//	
//	printf("정수 입력\n",dan);
//	scanf ("%d",&dan);
//
//	while(dan >=2){
//		i = 9;
//		while(i>= 1)
//		{
//			printf("%d * %d = %d\n", dan, i, dan*i);
//			i--;
//		}
//		
//		printf("\n");
//		dan --;
//	}
//	return 0;
//}

// 평균 구하기 
//  int main(void)
//{	 
//	int input, sum = 0, temp, num;
//	
//	printf("입력 받을 정수의 갯수");
//	scanf("%d", &input);
//	
//	num = input;
//	while(input > 0){
//		printf("정수 입력: ");
//		scanf("%d", &temp);
//		sum += temp;
//		 
//		input --;
//	}
//	printf("입력의 평균 : %lf\n", (double) sum/num);
//	return 0;
//}


//do - while 
//구구단  
//  int main(void)
//{
//	int dan = 9, i;
//	
//	do{
//		int i =9;
//		do{
//			printf("%d * %d = %d\n", dan, i, dan*i);
//			i--;
//		}while(i >= 1);
//		dan --;
//		printf("\n");
//			
//	}while(dan >=2);
//	return 0;
//} 

// 1 ~ 100까지 홀수 의 합 
//  int main(void)
//{
//	int sum = 0, i=1;
//	
//	do{
//		sum += i;
//		i +=2;
//	
//	}while(i<100);
//	
//	printf("sum: %d\n", sum);
//	return 0;
//} 


//for
//구구단 
//  int main(void)
//{
//	int dan, i;
//	
//	for(dan = 1; dan <=9; dan ++){
//		for(i =1; i<=9; i++){
//			printf("%d * %d = %d\n", dan, i, dan *i);		
//		}	
//		printf("\n");
//	}
//	
//	return 0;
//}


//  int main(void)
//{
//	int result =1, num, i;
//		
//		printf("정수 입력: ");
//		scanf("%d", &num);
//		
//		for(i =1; i<=num; i++){
//			result *= i; 
//			
//		}
//		printf("%d! = %d\n", num, result);
//		
//	return 0;
//}

//반복문은 조건을 주고, 그 조건을 만족하는 동안 반복 영역을 계속 반복하는구조
//반복문의 조건에 1이 들오가면, 조건이 거짓이 되는 경우가 없기때문에 조건을 빠져나갈수 없다.
// 반복문 안에 반복문을 쓸수 없다.
// while과 do while문의 차이는 반복되는 영역을 무조건 1번 실행하는지 인다.
// 대부분 while문은 dowhile문이나 for문으로 변경 가능하다. 
//반복문의 필수 요소들을 한 줄에 모아놓은 형태가 바로 for문이다.
//for문의 초기식은 딱 한번만 수행한다.
 
 
