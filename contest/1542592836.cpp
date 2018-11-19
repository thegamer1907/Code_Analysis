#include <bits/stdc++.h>

#define ll long long
#define sz size()
#define all(xx) xx.begin(),xx.end()
#define pb push_back
#define in insert
#define er erase
#define x Clarion
#define y Harbour
#define x1 Pascal
#define y1 Java
#define x2 Php
#define y2 Pyton
#define x3 Ruby
#define y3 Cpp
#define x4 Delphi
#define y4 Perl
#define x5 C#
#define y5 JavaScript
#define S second
#define F first
#define stop return 0
#define to_be continue
#define mp make_pair
#define Yes cout<<"Yes"
#define No cout<<"No"
#define YES cout<<"YES"
#define NO cout<<"NO"
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) 
#define input freopen (".in", "r", stdin)
#define output freopen (".out", "w", stdout)

using namespace std;

const int SS = 5e2 + 123;
const int N = 1e5 + 123;
const int NN = 1e6 + 123;
const int M = 1e7 + 123;
const int MM = 1e8 + 123;
const int inf = 1e9 + 123;
const ll INF = 1e18 + 123;
const ll MAXN = 1e10 + 123;

char a, b;
int n;
bool ok1, ok2;

int main ()
{
	speed;
	cin >> a >> b >> n;
	for (int i = 1; i <= n; i ++)
	{
		char a1, b1;
		cin >> a1 >> b1;
		if (a1 == a && b1 == b)
		{
			YES;
			stop;
		}
		if (b1 == a)
		{
			ok1 = 1;
		}
		if (a1 == b)
		{
			ok2 = 1;
		}
	}
	if (ok1 && ok2)
		YES;
	else
		NO;
}   	
//Code by A....