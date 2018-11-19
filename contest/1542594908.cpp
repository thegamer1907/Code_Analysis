#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i <= (e); i++)
#define FOD(i,s,e) for(int i = (s); i >= (e); i--)
#define ll long long
#define pb push_back
#define mp make_pair

int n, m, x, y, z, k, w;
char s[10], t[10];

int main ()
{
	scanf("%s", s);
	scanf("%d", &n);
	
	FOR(i, 0, n)
	{
		scanf("%s", t);
		if (t[0] == s[1]) x = 1;
		if (t[1] == s[0]) y = 1;
		if (s[0] == t[0] && s[1] == t[1]) z = 1;
	}
	
	if (z == 1) printf("YES\n");
	else if (x == 1 && y == 1) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
	