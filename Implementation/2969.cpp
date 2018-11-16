#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef double db;

# define R register 
# define P pair<int, int> 

const int INF = 0x3f3f3f3f;

int n, ans;
string s;

int main()
{
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		cin >> s;
		if(s == "Tetrahedron") ans += 4;
		else if(s == "Cube") ans += 6;
		else if(s == "Octahedron") ans += 8;
		else if(s == "Dodecahedron") ans += 12;
		else ans += 20;
	}
	printf("%d\n", ans);
	return 0;
}