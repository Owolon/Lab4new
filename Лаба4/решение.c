#define CRT_NO_SECURE_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	char c = '?';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c,%d,%f,%e",c, i, f, d);

	char cr;
	int ir;
	float fr;
	double dr;

	printf("\n������� ����:");
	scanf_s("%c", &cr);
	printf("%c", cr);

	printf("\n������� ����� �����:");
	scanf_s("%d", &ir);
	printf("%d", ir);

	printf("\n������� ������������ �����:");
	scanf_s("%f", &fr);
	printf("%f", fr);

	printf("\n������� ����� � ������� �������:");
	scanf_s("%le", &dr);
	printf("%le", dr);
	int fr2;
	fr2 = (int)fr;
	
//1A
	printf("\n\n����� �����:%d", fr2);
	printf("\n������� �����:%.2f", fr - fr2);
//1B
	printf("\n����������������� ���:%x",cr);
	printf("\n���������� ���:%i", cr);
//1V
	double result;
	result = 1.0/ir;
	printf("\n����������, � ���� 1/%d = %.2lf",ir, result);
	//2

	int a = 11;
	int b = 3;

	printf("\n������������� �������:%d\n������� ��������������� � ���-��� �����:%f\n������� � ��������������� � ����� �����-��� �����:%lf", (int)a/b,(float)a/b,(double)a/b);
	//�������� ��������

	//3
	int N;

	printf("\n������� ����� ���������� �����:\n");

	scanf_s("%d", &N);

	printf("\n��������� ����� ����� N = %d\n������ ����� ����� N = %d\n����� ���� ����� = %d\n����� �������� = %d%d%d", N % 10,N / 100, (N%10)+(N/10)%10+(N/100), N%10,(N/10)%10, N/100);

	return 0;

}