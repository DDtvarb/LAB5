#include "Header.h"

int main()
{
	int n;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "������� ���������� �������: ";


	if (!(cin >> n)) //���������, ����� �� �������?
	{
		cin.clear(); // ������� ��������� ������ �����
		cin.ignore(1000, '\n'); // ���������� ������� ����
		cout << "������������ ����. ����������, ������� �����: "; // ������� ��������� �� ������
		cin >> n;
	}

	Pabotnik* pabotnik = new Pabotnik[n];

	pabotnik_info(pabotnik, n);
	print_pabotnik(pabotnik, n);
	

	delete[] pabotnik;

	return 0;

}