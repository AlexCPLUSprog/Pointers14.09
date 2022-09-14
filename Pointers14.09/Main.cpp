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

// ����� ������� � �������
template <typename T>
void show_arr(T* arr, const int lenght) {
	cout << "[";
	for (int i = 0; i < lenght; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";
}

// ������ 1
template <typename T1, typename T2>
void arr_to_var(T1 *arr,const int lenght, T2 *sum) {
	for (int i = 0; i < lenght; i++)
		*sum += *(arr + i);
}


int main() {
	setlocale(LC_ALL, "Russian");

	int n = 10, m = 15;

	// ��������� �� ����������
	/*cout << "����� n = " << &n << endl;  // ����� ������ ����������

	int *pn; // ��������� ��������� pn
	pn = &n; // ���������� ����� n � ���������

	cout << "����� n = " << pn << endl;  // ����� ����������� ���������

	cout << "n = " << n << endl;

	cout << "n = " << *pn << endl; // �������������� ��������� ��� ������ ����������

	*pn = 100; // �������������� ��������� ��� ��������� ����������

	cout << "����� n = " << n << endl;

	pn = &m; // �������������� ��������� �� ������� m

	cout << "����� m = " << &m << endl;
	cout << "����� m = " << pn << endl;

	int* pm = &m;*/

	// ��������� �� �������
	/*int arr[5]{4, 3, 2, 8, 1};

	int* pa2 = &arr[2];
	pa2++; // �������� ��������� �� ���� ������ ������
	cout << "*pa2 = " << *pa2 << endl;

	int* parr = &arr[0];
	cout << "������, ���������� ����� ���������:\n";
	for (int i = 0; i < 5; i++)
		cout << *(parr + i) << ", ";
	cout << "\b\b.\n";

	cout << parr << endl;	// ����� ������� �������� ������� ����� ���������
	cout << arr << endl;	// ����� ������� �������� �������
	
	cout << "arr[0] = " << *arr << endl;

	cout << "������, ���������� � ������� ���������� ����������:\n";
	for (int i = 0; i < 5; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b.\n";*/

	// ��������� � �������
	/*my_swap(n, m);	// �� ��������, �.� ��������� - ��� �����
	cout << n << ' ' << m << endl; // 10 15

	pswap(&n, &m);
	cout << n << ' ' << m << endl; // 15 10
	*/

	// ������ 1. ����� ������� � ����������
	cout << "������� 1.\n������:\n";
	const int size = 5;
	int mass[size]{ 5, -2, 7, 16, 4 };
	show_arr(mass, size);
	n = 0;
	arr_to_var(mass, size, &n);
	cout << "����� = " << n << "\n\n";

	return 0;
}