#include "Header.h"

void pabotnik_info(Pabotnik* pabotnik, int n)

{
	for (int i = 0; i < n; ++i)
	{
		srand(time(0));
		cout << "������� ������� ���������" << i + 1 << ": ";
		cin >> pabotnik[i].surname;

		pabotnik[i].age = rand() % 20 + 40; // ��������� ��������� ������ �� ����������
		cout << "�������: " << pabotnik[i].age << endl;

		cout << "������� ��������� ��������� " << i + 1 << ": ";
		cin >> pabotnik[i].spec;

		pabotnik[i].okl = rand() % 35000 + 90000; // ��������� ��������� ������ �� ������
		cout << "������� �����: " << pabotnik[i].okl << endl;


	}



}





void print_pabotnik(const Pabotnik* pabotnik, int n){
	int excellent_count = 0;
	cout << "\n��������: "<< endl;
	for (int i = 0; i < n; ++i) {
		if (pabotnik[i].spec == "�������"){
			cout << "�������: " << pabotnik[i].surname << ", �������: " << pabotnik[i].age << ", �����: " << pabotnik[i].okl << "\n";
			excellent_count++;
		}

	}

	if (excellent_count != 0)
	{
		cout << "\n";
	}

	if (excellent_count == 0)
	{
		cout << "�����������\n";
	}

	cout << "���������� ���������: " << excellent_count << "\n" << endl;
	system("PAUSE");

}