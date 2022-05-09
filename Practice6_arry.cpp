 #include <stdio.h>
 
// int main(void){
// 	int num1, num2;
// 	printf("두 개의 정수 입력");
// 	scanf("%d %d", &num1, &num2);
//	 
//	 if(num1 > num2){
//	 	printf("연산 결과: %d\n", num1 - num2); 
//	 }else{
//	 	printf("연산 결과: %d\n", num2 = num1); 
//	 }
//	 return 0;
//	 
// }
 
// int main(void){
// 	int kor, eng, mat;
// 	double avg;
// 	
// 	printf("국어 영어 수학 점수 입력");
// 	scanf("%d %d %d", &kor, &eng, &mat);
// 	
// 	avg = (kor + eng + mat) /3.0;
// 	
// 	printf("평균 : %lf", avg);
// 	
// 	if(avg >= 90)
// 		printf("학점 : A");
//	else if(avg >= 80)
//		printf("학점 : B");
//	else if(avg >= 70)		  
// 		printf("학점 : C");
//	else if(avg >= 60)
//		printf("학점 : D");	  
// 	else
//	 	printf("학점 : F"); 
// }
 
 //삼항연산자 
 // num1 > num2 ? num1 : num2;
 // (조건) ? (data1) : data2) 참이면 data1 거짓이면 data 2
 // int num3 = ( num1 > num2)? num1 : num2;  참이면 num3 = num1 거짓이면 num2;
  
// int main(void){	
// 	int num, abs;
//	 
//	 printf("정수 입력: ");
//	 scanf("%d", &num);
//	 
//	 abs = (num > 0) ? (num) : (num * (-1));
//	 
//	 printf("%d 의 절대값: %d\n", num, abs); 
// } 
 
 //break 특정 조건을 만족하면 빠저나감
 // 반복문을 빠져나가지 않고 조건을 확인하려 다시 올라감 pass 같은것
 //남겨진 부분을 다시 실행 
  
//  int main(void){
// 	int sum = 0, num = 0;
// 	
// 	while(1){
// 		sum += num;
// 		
// 		if(sum > 5000)
// 		 break;
// 		 num ++;
//	 }
//	 printf("num : %d, sum: %d \n", num, sum);
//	 
//	 return 0;
// } 
 
//  int main(void){
//  	int num;
//  	
//  	for(num =1; num<30; num ++){
//  		if(num %2 == 0 || num %3 ==0)
//  			continue;
//  		
//		  printf("%d ", num);
//	  }
//	  
//	printf("\n");
//	
//	return 0;	
// } 

//삼항 연산 실습

// int main(void){	
// 	int num1, num2;  
//	 
//	 printf("두개의 정수 입력: ");
//	 scanf("%d %d", &num1, &num2);
//	 
//	 printf("연산 결과: %d\n", (num1 > num2) ? (num1 - num2) : (num2 -num1)); 
// } 
 
 //continue 예제
 
// int main(void){
// 	int i; 
// 	
// 	for(i = 1; i<100; i++){
// 		if(i % 2 ==0)
// 			continue;
//			  
// 		printf("%d ", i);
//		 
//	 }
//	return 0; 
// } 
 
 //continue / break 예제
 
//  int main(void){
// 	int dan, i; 
// 	
// 	for(dan =1; dan<=9; dan++){
// 		if(dan % 2 ==1)
// 			continue;
//			  
// 		for(i = 1; i<= 9; i++){
// 			if(dan<i)
// 			 break;
// 			 printf("%d * %d = %d\n", dan, i, dan *i);
//		 }
//		 
//		 printf("\n"); 
//	 }
//	 return 0; 
// } 
  
//int main(void) {
//	int a, z;
//	
//	for( a = 0; a<=9; a++){
//		for(z =0; z <=9; z++){
//			if(10 * a + z + 10 * z+ a!=99)
//			continue;
//			
//			printf("%d%d + %d%d = 99 \n", a, z, z, a);
//		}
//	}
//}

//switch퀴즈 1
//int main(void) {
//	int num1, num2;
//	printf("입력: ");
//	scanf("%d %d", &num1, &num2);
//		if(num1 >num2)
//		printf("출력: %d", num1);
//	else
//		printf("출력: %d", num2);
//return 0;
//}

 //switch퀴즈 2
//int main(void) {
//	int num1, num2;
//	printf("입력: ");
//	scanf("%d %d", &num1, &num2);
//	printf("출력: %d", (num1>num2) ? num1 : num2);
//	return 0;
//} 

//조건문을 쓰는 이유중 하나는 선택적 실행이 가능해서 이다 
//o 
//양자택일에 사용되는것은 else if 문이다. 
// x
// continue문은 자신을 감싸는 반복문을 빠져나가는 것이다. 
// x
// break문은 한번 확인하러 올라가는 것이다.
// x
// elseif문은 switch문으로 변경가능하다.  
//  x
// if문의 조거ㅏㄴ으로 하나의 값이 아닌, 범위 조건도 가능하다.
//  ㅇ
//  switch문의 조건으로 하나의 값이 아닌, 범위 조건도 가능하다.
//  x
//  swtich문에서 break문은 필수이다.
//  x
   
 
 
 
