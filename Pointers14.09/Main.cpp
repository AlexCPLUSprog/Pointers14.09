#include <iostream>
using namespace std;

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int *pnum1, int *pnum2) {
	int tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

// Вывод массива в консоль
template <typename T>
void show_arr(T* arr, const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";
}

// Задача 1
template <typename T1, typename T2>
void arr_to_var(T1 *arr,const int lenght, T2 *sum) {
	for (int i = 0; i < lenght; i++)
		*sum += *(arr + i);
}


int main() {
	setlocale(LC_ALL, "Russian");

	int n = 10, m = 15;

	// Указатели на переменные
	/*cout << "Адрес n = " << &n << endl;  // Вывод адреса переменной

	int *pn; // Объявляем указатель pn
	pn = &n; // Записываем адрес n в указатель

	cout << "Адрес n = " << pn << endl;  // Вывод содержимого указателя

	cout << "n = " << n << endl;

	cout << "n = " << *pn << endl; // Разыменовываем указатель для вывода переменной

	*pn = 100; // Разыменовываем указатель для изменения переменной

	cout << "Новая n = " << n << endl;

	pn = &m; // Перенаправляем указатель на область m

	cout << "Адрес m = " << &m << endl;
	cout << "Адрес m = " << pn << endl;

	int* pm = &m;*/

	// Указатели на массивы
	/*int arr[5]{4, 3, 2, 8, 1};

	int* pa2 = &arr[2];
	pa2++; // сдвигаем указатель на одну ячейку вперед
	cout << "*pa2 = " << *pa2 << endl;

	int* parr = &arr[0];
	cout << "Массив, выведенный через указатель:\n";
	for (int i = 0; i < 5; i++)
		cout << *(parr + i) << ", ";
	cout << "\b\b.\n";

	cout << parr << endl;	// адрес первого элемента массива через указатель
	cout << arr << endl;	// адрес первого элемента массива
	
	cout << "arr[0] = " << *arr << endl;

	cout << "Массив, выведенный с помощью синтаксиса указателей:\n";
	for (int i = 0; i < 5; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b.\n";*/

	// Указатели и функции
	/*my_swap(n, m);	// не работает, т.к параметры - это копии
	cout << n << ' ' << m << endl; // 10 15

	pswap(&n, &m);
	cout << n << ' ' << m << endl; // 15 10
	*/

	// Задача 1. Сумма массива в переменную
	cout << "Задание 1.\nМассив:\n";
	const int size = 5;
	int mass[size]{ 5, -2, 7, 16, 4 };
	show_arr(mass, size);
	n = 0;
	arr_to_var(mass, size, &n);
	cout << "Сумма = " << n << "\n\n";

	return 0;
}