/*#include <iostream>

using namespace std;

int main()
{
	int v[5][7], i, j;
	for (i = 0; i < 5; i++)
		for (j = 6; j >= 0; j--)
		{
			if (i == 0 || j == 6)
				v[i][j] = 1;
			else v[i][j] = (v[i][j + 1] + v[i - 1][j]) % 10;
		}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}*/