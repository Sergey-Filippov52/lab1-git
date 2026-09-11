// Лабораторная работа №1. Вариант 66.
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
		cout << "\n*** Калькулятор массы. Вариант 66***\n";
		cout << "1. Килограммы в фунты\n";
		cout << "2. Фунты в килограммы\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
			case 1:
				cout << "Введите массу в килограммах: ";
				cin >> kg;
				if (kg < 0) {
					cout << "Масса не может быть отрицательной.";
					break;
				}
				cout << "Результат в фунтах: " << kgToLb(kg) << "\n";
				break;
			case 2:
				cout << "Введите массу в фунтах: ";
				cin >> lb;
				if (lb < 0) {
					cout << "Масса не может быть отрицательной.";
					break;
				}
				cout << "Результат в килограммах: " << lbToKg(lb) << "\n";
				break;
			case 0:
				cout << "Работа завершина.\n";
				break;
			default:
				cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);

	return 0;
}

