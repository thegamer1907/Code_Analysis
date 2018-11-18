#include <bits/stdc++.h>
using namespace std;

int V[20], P[20];
int n, m, a[100005];
bool Test(int nr)
{
	int Rez[20] = { 0 };
	for (int i = 0; i < (int)pow(2,m); i++)
	{
		if (V[i] == 1 && P[i])
		{
			int ci = i;
			int ind = 1;
			while (ci != 0)
			{
				if (ci % 2 == 1)
					Rez[ind]++;
				ci /= 2;
				ind++;
			}
		}
	}
	for (int i = 1; i <= m; i++)
		if (Rez[i] > nr / 2)
			return 0;
	return 1;
}

void bkt(int x, int nr)
{
	if (x > (int)pow(2,m)-1)
	{
		if (Test(nr) && nr)
		{
			cout << "YES";
			exit(0);
		}
		return;
	}
	else
	{
		V[x] = 1;
		bkt(x + 1, nr + (P[x] && 1));
		V[x] = 0;
		bkt(x + 1, nr);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[j];
		}
		int p = 1; int rez = 0;
		for (int j = m; j >= 1; j--)
		{
			rez += p * a[j];
			p = p * 2;
		}
		P[rez]++;
	}
	bkt(0, 0);
	cout << "NO";
	//system("pause");
	return 0;
}
	   				    	    					  	 	 	