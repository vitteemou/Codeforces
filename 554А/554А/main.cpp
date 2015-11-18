#include <iostream>
#include <string>
#include <algorithm>
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
	/*char* arr = new char(n);

	int letCount = 1;
	int k = 0;
	while (k < n)
	{
		int l = 0;
		while (l < letCount && s[k] != arr[l])
			l++;
		if (l == letCount)
		{
			arr[letCount-1] = s[k];
			letCount++;
		}
		k++;
	}
	letCount--;

	int norm = 26 - letCount; // 'normal' letters
	int res = norm*(n + 1);

	for (int j = 0; j < letCount; j++)
	{
		int i = 0;
		while (i < n)
		{
			if (s[i] == arr[j])
			{
				while (s[i] == arr[j])
					i++;
			}
			else
			{
				res++;
				i++;
			}
		}
		//if (s[n - 1] == arr[j])
			res++;
	}

	cout << res << endl;

	//delete arr;*/
	return 0;
}