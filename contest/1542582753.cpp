#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, k;
int a[N];
int main()
{
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= n; ++i) 
	{
		int bit = 0;
		for(int j = 0; j < k; ++j) 
		{
			int x;
			scanf("%d", &x);
			if(x) bit |= (1 << j);
		}
		++a[bit];
	}	
	int S = (1 << k) - 1;
	if(a[0])
	{
		puts("YES");
		return 0;
	}
	for(int i = 0; i <= S; ++i) if(a[i])
		for(int j = 0; j <= S; ++j) if(a[j])
		if((i & j) == 0)
		{
			puts("YES");
			return 0;
		}
	puts("NO");
	return 0;
}