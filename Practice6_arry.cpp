 #include <stdio.h>
 
// int main(void){
// 	int num1, num2;
// 	printf("�� ���� ���� �Է�");
// 	scanf("%d %d", &num1, &num2);
//	 
//	 if(num1 > num2){
//	 	printf("���� ���: %d\n", num1 - num2); 
//	 }else{
//	 	printf("���� ���: %d\n", num2 = num1); 
//	 }
//	 return 0;
//	 
// }
 
// int main(void){
// 	int kor, eng, mat;
// 	double avg;
// 	
// 	printf("���� ���� ���� ���� �Է�");
// 	scanf("%d %d %d", &kor, &eng, &mat);
// 	
// 	avg = (kor + eng + mat) /3.0;
// 	
// 	printf("��� : %lf", avg);
// 	
// 	if(avg >= 90)
// 		printf("���� : A");
//	else if(avg >= 80)
//		printf("���� : B");
//	else if(avg >= 70)		  
// 		printf("���� : C");
//	else if(avg >= 60)
//		printf("���� : D");	  
// 	else
//	 	printf("���� : F"); 
// }
 
 //���׿����� 
 // num1 > num2 ? num1 : num2;
 // (����) ? (data1) : data2) ���̸� data1 �����̸� data 2
 // int num3 = ( num1 > num2)? num1 : num2;  ���̸� num3 = num1 �����̸� num2;
  
// int main(void){	
// 	int num, abs;
//	 
//	 printf("���� �Է�: ");
//	 scanf("%d", &num);
//	 
//	 abs = (num > 0) ? (num) : (num * (-1));
//	 
//	 printf("%d �� ���밪: %d\n", num, abs); 
// } 
 
 //break Ư�� ������ �����ϸ� ��������
 // �ݺ����� ���������� �ʰ� ������ Ȯ���Ϸ� �ٽ� �ö� pass ������
 //������ �κ��� �ٽ� ���� 
  
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

//���� ���� �ǽ�

// int main(void){	
// 	int num1, num2;  
//	 
//	 printf("�ΰ��� ���� �Է�: ");
//	 scanf("%d %d", &num1, &num2);
//	 
//	 printf("���� ���: %d\n", (num1 > num2) ? (num1 - num2) : (num2 -num1)); 
// } 
 
 //continue ����
 
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
 
 //continue / break ����
 
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

//switch���� 1
//int main(void) {
//	int num1, num2;
//	printf("�Է�: ");
//	scanf("%d %d", &num1, &num2);
//		if(num1 >num2)
//		printf("���: %d", num1);
//	else
//		printf("���: %d", num2);
//return 0;
//}

 //switch���� 2
//int main(void) {
//	int num1, num2;
//	printf("�Է�: ");
//	scanf("%d %d", &num1, &num2);
//	printf("���: %d", (num1>num2) ? num1 : num2);
//	return 0;
//} 

//���ǹ��� ���� ������ �ϳ��� ������ ������ �����ؼ� �̴� 
//o 
//�������Ͽ� ���Ǵ°��� else if ���̴�. 
// x
// continue���� �ڽ��� ���δ� �ݺ����� ���������� ���̴�. 
// x
// break���� �ѹ� Ȯ���Ϸ� �ö󰡴� ���̴�.
// x
// elseif���� switch������ ���氡���ϴ�.  
//  x
// if���� ���Ť������� �ϳ��� ���� �ƴ�, ���� ���ǵ� �����ϴ�.
//  ��
//  switch���� �������� �ϳ��� ���� �ƴ�, ���� ���ǵ� �����ϴ�.
//  x
//  swtich������ break���� �ʼ��̴�.
//  x
   
 
 
 
