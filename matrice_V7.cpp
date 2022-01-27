#include <iostream>

using namespace std;

int main()
{
	int x, n = 0, a[10][10], copx, i, j;
	cin >> x;
	copx = x;
	copx = copx / 10;
	while (copx)
	{
		copx = copx / 10;
		n++;
	}
	n++;
	copx = x;
	for (i = n; i >= 0; i--)
	{
		x = copx;
		for (j = n; j >= 0; j--)
		{
			a[i][j] = x % 10;
			x = x / 10;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}