#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#define ll long long

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	int* a = new int[n];
	for (int i = 0; i < n-1; i++)
		cin >> a[i];
	int tet = 1;
	int i = 0;
	while (tet < t)
	{
		tet += a[i];
		i = tet -1;
	}
	if (tet == t)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	//system("pause");
	return 0;
}