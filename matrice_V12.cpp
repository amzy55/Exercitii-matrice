/*#include <iostream>

using namespace std;

int main()
{
	int n, v[21][21], i, j, k, aux, t;
	cin >> n >> k;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> v[i][j];
		}

	for (j = n - k; j > 1; j--)
	{
		aux = v[k][j];
		v[k][j] = v[k][j - 1];
		v[k][j - 1] = aux;
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}*/
