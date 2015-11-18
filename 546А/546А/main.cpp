#include <iostream>
using namespace std;

int main()
{
	int k; // price of the 1st banana (in dollars)
	int n; // amount of dollars
	int w; // amount of bananas
	cin >> k >> n >> w;

	int price = k;
	for (int i = 2; i <= w; i++)
		price += (k*i);

	int m = 0;
	if (price > n)
		cout << price - n << endl;
	else
		cout << m << endl;
	return 0;
}
