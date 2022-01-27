/*#include <iostream>

using namespace std;

int main()
{
	int m, n, a[20][20], i, j;
	cin >> m >> n;
	for (i = 0; i <= m - 1; i++)
		for (j = 0; j <= n - 1; j++)
		{
			cin >> a[i][j];
		}
	for (j = 0; j <= n - 2; j++)
	{
		for (i = 1; i <= m - 1; i++)
			if (a[0][j] == a[i][n - 1])
				cout << a[0][j] << " ";
	}
}*/