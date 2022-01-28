/*include <iostream>

using namespace std;

int main()
{
	int n, v[21][21], i, j, k;
	cin >> n >> k;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> v[i][j];
		}

	for (i = 1; i <= k; i++)
	{
		j = v[k][i];
		v[k][i] = v[i][k];
		v[i][k] = j;
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