#include "Header.h"

int main()
{
	int n;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите количество заводов: ";


	if (!(cin >> n)) //проверяем, число ли введено?
	{
		cin.clear(); // Очищаем состояние потока ввода
		cin.ignore(1000, '\n'); // Игнорируем прошлый ввод
		cout << "Некорректный ввод. Пожалуйста, введите число: "; // Выводим сообщение об ошибке
		cin >> n;
	}

	Pabotnik* pabotnik = new Pabotnik[n];

	pabotnik_info(pabotnik, n);
	print_pabotnik(pabotnik, n);
	

	delete[] pabotnik;

	return 0;

}