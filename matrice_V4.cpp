//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int m, n, i, j, a[101][101], ok = 0, max = 0;
//	cin >> m >> n;
//	for (i = 1; i <= m; i++)
//		for (j = 1; j <= n; j++)
//			cin >> a[i][j];
//	for (i = 1; i <= m; i++)
//	{
//		for ( j = 1; j <= n; j++)
//			if ((a[i][j] < 21) && (a[i][j] > max))
//				max = a[i][j];
//		for (j = 1; j <= n; j++)
//			if ((a[i][j] == max) && (ok == 0))
//			{
//				cout << a[i][j] << " ";
//				ok = 1;
//			}
//		if (ok == 0)
//			cout << "nu exista";
//		ok = 0;
//		max = 0;
//		cout << endl;
//	}
//	return 0;
//}