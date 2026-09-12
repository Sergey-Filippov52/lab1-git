// Лабораторная работа №1. Вариант 66. Часть 1.
// Выполнил Филиппов С. Н., группа ПИ-52.
#include <iostream>
#include <clocale>
using namespace std;

// ===== Расчетные функции варианта =====

// Конвертер величин: килограммы -> фунты
double kgToLb(double kg) {
	return kg * 2.20462;
}

// Конвертер величин: фунты -> килограммы
double lbToKg(double lb) {
	return lb / 2.20462;
}

// ===== Главная функция: меню =====

int main() {
	setlocale(LC_ALL, "Ru");
	int choice;
	double kg, lb;

	do {
		cout << "\n=== Вариант 66: конвертер массы (килограммы <-> фунты) ===\n";
		cout << "1. Килограммы в фунты\n";
		cout << "2. Фунты в килограммы\n";
		cout << "0. Выход из программы\n";
		cout << "Выберите пункт меню: ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Введите массу в килограммах: ";
				cin >> kg;
				if (kg < 0) {
					cout << "Масса не может быть отрицательной.";
					break;
				}
				cout << "Масса в фунтах: " << kgToLb(kg) << "\n";
				break;
			case 2:
				cout << "Введите массу в фунтах: ";
				cin >> lb;
				if (lb < 0) {
					cout << "Масса не может быть отрицательной.";
					break;
				}
				cout << "Масса в килограммах: " << lbToKg(lb) << "\n";
				break;
			case 0:
				cout << "Работа завершина.\n";
				break;
			default:
				cout << "Такого пункта меню нет.\n";
		}
	} while (choice != 0);

	return 0;
}