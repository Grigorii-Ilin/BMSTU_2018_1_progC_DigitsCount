// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"


#include <conio.h>
#include <locale.h>



#pragma warning(disable:4996)




int main()
{
	
	setlocale(LC_ALL, "rus");

	printf("\n ������� ������� ����� ");

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

	printf("\n ���������� ���� � ����� %d", KolvoCifr);


	
	getch();

    return 0;
}

