#include<iostream>
using namespace std;


int main()
{
	system("chcp 1251>nul");
	int A, B;
	cout << "����� �����, � ������� ����� ����� ���" << endl;
	cout << "������ �����   ";
	cin >> A;
	cout << "������ �����   ";
	cin >> B;
	

	
	if (A < B)   // � ������ ����� ����� � ������, ��� �
	{
		A+= B;
		B = A - B;
		A = A - B;
	}
	
	do
	{

	
		A %= B;            
		switch (A)                             //���������� �� �������
		{
		case 0:                               // ���� ����� ��������� ��� ����� ������� ��� �������
			cout << "��� = " << B << endl;
			break;
		default:
			B %= A;
			if (B == 0)                      // �������� ��������� �� 0, ��������� ��� 0 ��������� �� ����������.
			{
				cout << "��� = " << A << endl;
			}
			break;
		}
		
	} while (A>0);

	system("pause>nul");
	return 0;
}

