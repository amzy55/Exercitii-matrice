/*#include <iostream>

using namespace std;

int main()
{
	int m, n, k, v[20][20], i, j, ok, ok2;
	cin >> m >> n >> k;

	for (i = 1; i <= m; i++)
		for (j = 1; j <= n; j++)
		{
			cin >> v[i][j];
		}

	for (i = 1; i <= m; i++)
	{
		ok = 1;
		for (j = 1; j <= n; j++)
		{
			if (k != i)
				if (v[k][j] == v[i][j])
					ok = 0;
		}
		if (ok == 1)
			ok2 = 1;
	}

	if (ok2 = 1)
	{
		cout << "DA" << endl;
		for (j = 1; j <= n; j++)
			cout << v[k][j] << " ";
	}
	else cout << "NU";

	return 0;
}*/