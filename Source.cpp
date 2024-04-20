#include "Header.h"

void pabotnik_info(Pabotnik* pabotnik, int n)

{
	for (int i = 0; i < n; ++i)
	{
		srand(time(0));
		cout << "Введите фамилию работника" << i + 1 << ": ";
		cin >> pabotnik[i].surname;

		pabotnik[i].age = rand() % 20 + 40; // генерация случайной оценки по математике
		cout << "Возраст: " << pabotnik[i].age << endl;

		cout << "Введите должность работника " << i + 1 << ": ";
		cin >> pabotnik[i].spec;

		pabotnik[i].okl = rand() % 35000 + 90000; // генерация случайной оценки по физике
		cout << "Средний оклад: " << pabotnik[i].okl << endl;


	}



}





void print_pabotnik(const Pabotnik* pabotnik, int n){
	int excellent_count = 0;
	cout << "\nИнженеры: "<< endl;
	for (int i = 0; i < n; ++i) {
		if (pabotnik[i].spec == "инженер"){
			cout << "Фамилия: " << pabotnik[i].surname << ", Возраст: " << pabotnik[i].age << ", Оклад: " << pabotnik[i].okl << "\n";
			excellent_count++;
		}

	}

	if (excellent_count != 0)
	{
		cout << "\n";
	}

	if (excellent_count == 0)
	{
		cout << "отсутствуют\n";
	}

	cout << "Количество инженеров: " << excellent_count << "\n" << endl;
	system("PAUSE");

}