#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// "특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행"하는 과정입니다.

	// char의 길이 : -128 ~ 127

	// char character = 128;
	// 
	// printf("charcter 변수의 값 : %d\n", character);

	// 오버플로우는 부호 없는 자료형애서도 똑같이 발생하며,
	// 실수일 때, 오버플로우가 발생하면 infinity라는 값이 출력됩니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.

	// char alphabet = -129;
	// 
	// printf("alphabet 변수의 값 : %d\n", alphabet);

	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생
	// 하며, 실수일 대 언더플로우가 발생하면 0이라는 값이 출력됩니다.
#pragma endregion

#pragma region 시프트 연산자
	// 비트의 위치를 오른쪽 또는 왼쪽으로 특정한 수만큼
	// 이동시키는 연산자입니다.

	// int x = 10; // 0000 1010
	// int y = 12; // 0000 1100
	// 
	// printf("x의 값을 2번 왼쪽으로 이동한 결과 : %d\n", x << 2); // 0010 1000
	// printf("y의 값을 2번 오른쪽으로 이동한 결과 : %d\n", y >> 2); // 0000 0011

#pragma endregion

#pragma region 산술 연산자

	// int num1 = 5; // 변수
	// const int num2 = 10; // 심볼릭 상수
	// 
	// int result1 = num1 + num1;
	// int result2 = 15 - num1;
	// int result3 = num2 * 5;
	// int result4 = 15 / 15;
	// int result5 = num2 % num2;
	// 
	// printf("result1 변수의 값 : %d\n", result1);
	// printf("result2 변수의 값 : %d\n", result2);
	// printf("result3 변수의 값 : %d\n", result3);
	// printf("result4 변수의 값 : %d\n", result4);
	// printf("result5 변수의 값 : %d\n", result5);

	// int result1 <- 변수 + 변수
	// int result2 <- 리터럴 상수 - 변수
	// int result3 <- 심볼릭 상수 * 리터럴 상수
	// int result4 <- 리터럴 상수 / 리터럴 상수
	// int result5 <- 심볼릭 상수 % 심볼릭 상수
#pragma endregion

#pragma region 부호 없는 자료형

	// unsigned short mineral = 65535;
	// unsigned int gas = -1;
	// 
	// printf("mineral 변수의 값 : %u\n", mineral);
	// 
	// printf("gas 변수의 값 : %u\n", gas);
	// printf("gas 변수의 값 : %d\n", gas);

#pragma endregion



}