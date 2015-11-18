#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s; //from 1 to 20 symbols
	cin >> s;

	int n = s.length();
	int res = 26 * (n + 1);

	for (char i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == s[j])
				res--;
		}
	}
	cout << res<<endl;
	return 0;
}
