#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i <= (e); i++)
#define FOD(i,s,e) for(int i = (s); i >= (e); i--)
#define ll long long
#define pb push_back
#define mp make_pair

int n, m, x, y, z, k, w;
int tmp;
int A[100050], freq[20];

int main ()
{
	scanf("%d %d", &n, &m);
	
	FOR(i, 0, n)
	{
		tmp = 0;
		FOR(j, 0, m) 
		{
			tmp *= 2;
			scanf("%d", &x);
			tmp += x;
		}
		A[i] = tmp;
		freq[A[i]]++;
	}
	
	k = (1 << m) - 1;
	
	if (freq[0] > 0) { printf("YES\n"); return 0; }
	
	FOR(i, 0, k) FOR(j, i + 1, k)
	{
		if (freq[i] > 0 && freq[j] > 0 && (i & j) == 0) { printf("YES\n"); return 0; }
	}
	
	
	printf("NO\n");
	return 0;
}