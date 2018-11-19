#include<bits/stdc++.h>
using namespace std;
int p[100005], t[5];
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<k; ++j)
			scanf("%d", &t[j]);
		for(int j=0; j<k; ++j)
			if(t[j] == 1) p[i] ^= (1 << j);
	}
	int m = 1 << k;
	bool f1 = false, f2 = false, flag = false;
	for(int i=0; i<m; ++i)
	{
		for(int j=0; j<m; ++j)
		{
			f1 = false, f2 = false;
			bool f = true;
			for(int q=0; q<k; ++q)
			{
				if((i >> q) & 1 == 1 && (j >> q) & 1 == 1)
					f = false;
			}
			if(f)
			{
				for(int z=0; z<n; ++z)
				{
					if(p[z] == i) f1 = true;
					if(p[z] == j) f2 = true;
				}
			}
			if(f1 && f2) flag = true;
		}
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
