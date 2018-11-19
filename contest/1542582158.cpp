#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int a[5];
int b[16];
int main()
{
	int n, k;
	int i, j;
	int num;
	
	cin >> n >> k;
	for (i = 1; i <= n; i++)
	{
		num = 0;
		for (j = 0; j < k; j++)
		{
			cin >> a[j];
			num += (a[j] << j);
		}
		b[num]++;
	}
	for (i = 0; i <= 15; i++)
		if (b[i] != 0)
		{
			for (j = 0; j <= 15; j++)
				if ((i&j) == 0 && b[j] != 0) break;
			if (j <= 15) break;
		}
	if (i <= 15) cout << "YES";
	else cout << "NO";
}