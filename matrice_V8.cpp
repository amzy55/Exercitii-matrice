/*#include <iostream>

using namespace std;

int main()
{
	int n, v[50][50], i, j, s = 0;
	cin >> n;

	for (i = 0; i <= n - 1; i++)
		for (j = 0; j <= n - 1; j++)
		{
			cin >> v[i][j];
		}

	for (i = 0; i <= n - 1; i++)
		for (j = 0; j <= n - 1; j++)
		{
			if ((i < j) && (i + j > n - 1) && (j != n - 1))
				s = s + v[i][j];
		}
	cout << s;
	return 0;
}*/