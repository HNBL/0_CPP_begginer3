#include<iostream>
using namespace std;


int main()
{
	system("chcp 1251>nul");
	int A, B;
	cout << "Введи числа, у которых нужно найти НОД" << endl;
	cout << "первое число   ";
	cin >> A;
	cout << "второе число   ";
	cin >> B;
	

	
	if (A < B)   // в случае ввода числа А меньше, чем В
	{
		A+= B;
		B = A - B;
		A = A - B;
	}
	
	do
	{

	
		A %= B;            
		switch (A)                             //сравниваем по остатку
		{
		case 0:                               // если числа динаковые или число делится без остатка
			cout << "НОД = " << B << endl;
			break;
		default:
			B %= A;
			if (B == 0)                      // проверка сравнения на 0, поскольку при 0 сравнение не происходит.
			{
				cout << "НОД = " << A << endl;
			}
			break;
		}
		
	} while (A>0);

	system("pause>nul");
	return 0;
}

