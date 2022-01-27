/*#include <iostream>

using namespace std;

int main()
{
	int n, i, j, a[21][21];
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			if ((i + j) == n + 1)
				a[i][j] = 0;
			else if ((i + j) < n + 1)
				a[i][j] = n - (i - 1) - j;
			else
				a[i][j] = a[i][j - 1] + 1;
		}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}*/