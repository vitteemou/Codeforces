/*
Маленький Слоник любит числа.  
У него есть целое положительное число x. Маленький Слоник хочет найти количество положительных целых чисел d таких, что d является делителем x,
а также x и d имеют хотя бы одну общую цифру(одинаковую) в десятичном представлении.
Помогите Маленькому Слонику найти описанное количество.

Входные данные: В единственной строке записано целое число x (1<= x <= 10^9).
Выходные данные: В единственную строку выведите целое число — ответ на задачу.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool anyCoincidences(long int div, long int* arr, long int n)
{
	while (div > 0)
	{
		int mod = div % 10;
		for (int j = 0; j < n; j++)
		{
			if (mod == arr[j])
				return true;
		}
		div = div / 10;
	}

	return false;
}

int main()
{
	//cout << (1024 * 1024 * 1024 * 4) << endl;
	long int x; // from 1 to 10^9
	cin >> x;

	long int arr[15]; // array of digits in reverse order 
	long int i = 0; //index
	long int y = x;

	while (y > 0)
	{
		arr[i] = y % 10;
		y = y / 10;
		i++;
	}

	int n = i; // amount of arr elements
	//long int d; // divisor of x
	//int m; // amount of divisors
	
	int mainCounter = 0;
	long int k = sqrt(x);
	long int j = 0;
	long int div_Arr[100];
	for (i = 1; i <= k; i++)
		if (x%i == 0)
		{
			div_Arr[j] = i;
			if (anyCoincidences(div_Arr[j], arr, n))
				mainCounter++;
			j++;
		}
	
	//cout << k << "; " << mainCounter << "; "<<j<< endl;
	int olo = j; 
	for (j = 0; j < olo; j++)
	{
		cout << div_Arr[j] << ' ';
	}

	for (j = 0; j < olo; j++)
	{
		long int term = x / div_Arr[j];
		cout << term << ' ';
		if (anyCoincidences(term, arr, n))
			mainCounter++;
	}
	cout << endl;
	cout << mainCounter << endl;

	if (sqrt(x) == k)
		mainCounter--;

	cout << mainCounter << endl;
	return 0;
}