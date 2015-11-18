﻿/*Маленький Слоник увлекается рекурсивными функциями.
В этот раз это функция сортировки. Пусть есть перестановка a из целых чисел от 1 до n, включительно.
Через a_i обозначим i - ое число перестановки. Тогда рекурсивная функция Маленького Слоника f(x) для сортировки первых x чисел перестановки работает
следующим образом :

> Если x  = 1, то прекратить выполнение функции.
> Иначе - вызвать f(x - 1), а после этого сделать swap(a_(x - 1), a_x) (поменять местами x - ое и(x - 1) - ое числа перестановки a).

Преподаватель Маленького Слоника считает, что такая функция работает некорректно. Но, чтобы не получить двойку, Маленький Слоник хочет каким - то
образом показать работоспособность его функции. Помогите ему - найдите такую перестановку чисел от 1 до n включительно, что после выполнения функции
Маленького Слоника(а именно, вызова f(n)), перестановка будет отсортирована по возрастанию.

Входные данные: В единственной строке записано целое число n(1 <= n <= 10^3) — размер перестановки.
Выходные данные: В единственную строку выведите n различных чисел от 1 до n — искомая перестановка. Числа в строке разделяйте пробелами.

Гарантируется, что ответ существует.*/

#include <iostream>
#include <algorithm>
using namespace std;

/*int* f(int n)
{
	int* arr = new int[n];

	if (n == 1)
		return arr;
	else
	{
		f(n-1);
		swap();
	}
}*/

int main()
{
	int n;
	cin >> n;

	cout << n << ' ';
	for (int i = 1; i < n; i++)
		cout << i << ' ';
	return 0;
}