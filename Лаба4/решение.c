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

	printf("\nВведите знак:");
	scanf_s("%c", &cr);
	printf("%c", cr);

	printf("\nВведите целое число:");
	scanf_s("%d", &ir);
	printf("%d", ir);

	printf("\nВведите вещественное число:");
	scanf_s("%f", &fr);
	printf("%f", fr);

	printf("\nВведите число в научной нотации:");
	scanf_s("%le", &dr);
	printf("%le", dr);
	int fr2;
	fr2 = (int)fr;
	
//1A
	printf("\n\nЦелая часть:%d", fr2);
	printf("\nДробная часть:%.2f", fr - fr2);
//1B
	printf("\nШестнадцатиричный код:%x",cr);
	printf("\nДесятичный код:%i", cr);
//1V
	double result;
	result = 1.0/ir;
	printf("\nДесятичное, в виде 1/%d = %.2lf",ir, result);
	//2

	int a = 11;
	int b = 3;

	printf("\nЦелочисленное деление:%d\nДеление преобразованное в вещ-ное число:%f\nДеление с преобразованием в целое десят-ное число:%lf", (int)a/b,(float)a/b,(double)a/b);
	//Потеряна точность

	//3
	int N;

	printf("\nВведите целое трезначное число:\n");

	scanf_s("%d", &N);

	printf("\nПоследняя цифра числа N = %d\nПервая цифра числа N = %d\nСумма цифр числа = %d\nЧисло наоборот = %d%d%d", N % 10,N / 100, (N%10)+(N/10)%10+(N/100), N%10,(N/10)%10, N/100);

	return 0;

}