#include <stdio.h>

void main()
{
#pragma region �����÷ο�
	// "Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������
	// �Ѿ ������ ����"�ϴ� �����Դϴ�.

	// char�� ���� : -128 ~ 127

	// char character = 128;
	// 
	// printf("charcter ������ �� : %d\n", character);

	// �����÷ο�� ��ȣ ���� �ڷ����ּ��� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� ��, �����÷ο찡 �߻��ϸ� infinity��� ���� ��µ˴ϴ�.
#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ����
	// �� �Ѿ ������ �����ϴ� �����Դϴ�.

	// char alphabet = -129;
	// 
	// printf("alphabet ������ �� : %d\n", alphabet);

	// ����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻�
	// �ϸ�, �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ���� ��µ˴ϴ�.
#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� ��ġ�� ������ �Ǵ� �������� Ư���� ����ŭ
	// �̵���Ű�� �������Դϴ�.

	// int x = 10; // 0000 1010
	// int y = 12; // 0000 1100
	// 
	// printf("x�� ���� 2�� �������� �̵��� ��� : %d\n", x << 2); // 0010 1000
	// printf("y�� ���� 2�� ���������� �̵��� ��� : %d\n", y >> 2); // 0000 0011

#pragma endregion

#pragma region ��� ������

	// int num1 = 5; // ����
	// const int num2 = 10; // �ɺ��� ���
	// 
	// int result1 = num1 + num1;
	// int result2 = 15 - num1;
	// int result3 = num2 * 5;
	// int result4 = 15 / 15;
	// int result5 = num2 % num2;
	// 
	// printf("result1 ������ �� : %d\n", result1);
	// printf("result2 ������ �� : %d\n", result2);
	// printf("result3 ������ �� : %d\n", result3);
	// printf("result4 ������ �� : %d\n", result4);
	// printf("result5 ������ �� : %d\n", result5);

	// int result1 <- ���� + ����
	// int result2 <- ���ͷ� ��� - ����
	// int result3 <- �ɺ��� ��� * ���ͷ� ���
	// int result4 <- ���ͷ� ��� / ���ͷ� ���
	// int result5 <- �ɺ��� ��� % �ɺ��� ���
#pragma endregion

#pragma region ��ȣ ���� �ڷ���

	// unsigned short mineral = 65535;
	// unsigned int gas = -1;
	// 
	// printf("mineral ������ �� : %u\n", mineral);
	// 
	// printf("gas ������ �� : %u\n", gas);
	// printf("gas ������ �� : %d\n", gas);

#pragma endregion



}