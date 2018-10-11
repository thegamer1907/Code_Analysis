#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
char a[1010][1010], b[1010][1010];
int main()
{
	int n, m;
	while(~scanf("%d %d", &n, &m))
	{
		for(int i = 0; i < n; i++)
			scanf("%s", a[i]);
		for(int j = 0; j < m; j++)
			scanf("%s", b[j]);
		int k = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
			{
				if(strcmp(a[i], b[j]) == 0)
					k++;
			}
		if(k % 2 == 1)
		{
			if(n - k >= m - k)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			if(n - k > m - k)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
}