// Лабораторная работа №1. Вариант 66.
// Выполнил Филиппов С. Н., группа ПИ-52.
#include <iostream>
#include <windows.h>
using namespace std;

// ===== Расчетные функции варианта =====

// Конвектор величин: килограммы -> фунты
double kgToLg(double kg) {
	return kg * 2.20462;
}

// Конвектор величин: фунты -> килограммы
double lbTokg(double lb) {
	return lb / 2.20432;
}

// ===== Главная функция: меню =====

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int choice;
	double kg, lg;

	do {
		cout << "\n=== Вариант 66: конвектор велечин: килограммы <-> фунты ===\n";
		cout << "1. Килограммы в фунты\n";
		cout << "2. Фунты в килограммы\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Введите массу в килограммах: ";
				cin >> kg;
				cout << "Результат в фунтах: " << kgToLg(kg) << " lb\n";
				break;
			case 2:
				cout << "Введите массу в фунтах: ";
				cin >> lg;
				cout << "Результат в килограаммах: " << lgToKg(lg) << " kg\n";
				break;
			case 0:
				cout << "Работа завершина.\n";
			default:
				cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);

	return 0;
}

