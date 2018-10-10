#include <bits/stdc++.h>
using namespace std;

const int MN = 1000005;

char S[MN];
int Z[MN], naj[MN];
int n;

inline void idz(int & l, int & r)
{
	while(r < n && S[r - l] == S[r]) ++r;
	r--;
}

void liczZ()
{
	n = strlen(S);
	int l = 0, r = 0;
	Z[0] = n;
	for(int i = 1; i < n; ++i)
	{
		if(i > r)
		{
			l = r = i;
			idz(l, r);
			Z[i] = r - l + 1;
		}
		else
		{
			int k = i - l;
			if(Z[k] < r - i + 1)
			{
				Z[i] = Z[k];
			}
			else
			{
				l = i;
				idz(l, r);
				Z[i] = r - l + 1;
			}
		}
		
	}
}

void wypisz(int x)
{
	for(int i = 0; i < x; ++i)
		printf("%c", S[i]);
}

int main()
{
	scanf("%s", S);
	liczZ();
	for(int i = n - 1; i > 0; --i)
	{
		naj[n - i] = naj[n - i - 1];
		if(Z[i] + i == n)
			naj[n - i] = n - i;
	}
	int res = 0;
	for(int i = 1; i < n; ++i)
	{
		int cur = Z[i];
		if(Z[i] + i == n) --cur;
		res = max(res, min(cur, naj[cur]));
	}
	if(!res) printf("Just a legend");
	else wypisz(res);
}
