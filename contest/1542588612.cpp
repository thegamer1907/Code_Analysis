#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i <= (e); i++)
#define FOD(i,s,e) for(int i = (s); i >= (e); i--)
#define ll long long
#define pb push_back
#define mp make_pair

int n, m, x, y, z, k, w;
int a, b, c;

int check(int a, int b, int c, int x, int y)
{
	int st = x;
	int ed = y;
	
	if (ed < st) ed += 43200;
	
	int A = a, B = b, C = c;
	if (A < st) A += 43200;
	if (B < st) B += 43200;
	if (C < st) C += 43200;
	
	
	if (A < ed) return 0;
	if (B < ed) return 0;
	if (C < ed) return 0;
	
	return 1;
}

int main ()
{
	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
	
	a %= 12;
	x %= 12;
	y %= 12;
	
	x *= 3600;
	y *= 3600;
	
	a = a * 3600 + (b * 60 + c);
	b = b * 720 + c * 12;
	c = c * 720;

	
	m = max(check(a, b, c, x, y), check(a, b, c, y, x));
	if (m == 1) printf("YES\n");
	else printf("NO\n");
	return 0;
}