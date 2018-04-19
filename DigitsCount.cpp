// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include <conio.h>
#include <locale.h>



#pragma warning(disable:4996)




int main()
{
	
	setlocale(LC_ALL, "rus");

	printf("\n Введите простое число ");

    int VvedennoeChislo = 0;
	scanf("%d", &VvedennoeChislo);

	int Desyatki=1;
	int SummaCifr=0;
	int KolvoCifr=0;

	while (Desyatki<VvedennoeChislo)
	{
KolvoCifr++;
Desyatki*=10;
	}

	printf("\n Количество цифр в числе %d", KolvoCifr);


	
	getch();

    return 0;
}

