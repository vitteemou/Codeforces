#include <iostream>
using namespace std;

int main()
{
	int n; // amount of cars
	cin >> n;

	int mat[200][200]; // matrix of (elems from -1 to 3)
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> mat[i][j];
	
	int arr[200];
	int counter = 0;

	for (int k = 1; k <= n; k++)
	{
		for (int m = 1; m <= n; m++)
		{
			if ((mat[k][m] == 1) || (mat[k][m] == 3))
			{
				if (k <= n)
				{
					k++;
					m = 1;
				}
				else
				{
					k++;
					break;
				}
			}
		}
		if (k <= n)
		{
			arr[counter] = k;
			counter++;
		}
	}
	
	int arr_1[200];
	int counter_1 = 0;

	for (int i = 0; i < counter; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((mat[j][arr[i]] == 2) || (mat[j][arr[i]] == 3))
			{
				if (i < counter - 1)
				{
					i++;
					j = 1;
				}
				else
				{
					i++;
					break;
				}
			}
		}
		
		if (i < counter)
		{
			arr_1[counter_1] = arr[i];
			counter_1++;
		}
	}

	cout << counter_1 << endl;
	for (int i = 0; i < counter_1; i++)
		cout << arr_1[i] << ' ';

	return 0;
}