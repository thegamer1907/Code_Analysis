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
#define to_be continue
#define mp make_pair
#define stop return 0
#define Yes cout<<"Yes"
#define No cout<<"No"
#define YES cout<<"YES"
#define NO cout<<"NO"
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0) 
#define input freopen (".in", "r", stdin)
#define output freopen ("14789325.txt", "w", stdout)

using namespace std;

const int SS = 5e2 + 123;
const int N = 1e5 + 123;
const int NN = 1e6 + 123;
const int M = 1e7 + 123;
const int MM = 1e8 + 123;
const int inf = 1e9 + 123;
const ll INF = 1e18 + 123;
const ll MAXN = 1e10 + 123;

vector <int> v;
int n, m, sum;
bool ok;

int main ()
{
	speed;
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
	{
		int a = 0;
		for (int j = 1; j <= m; j ++)
		{
			int x;
			cin >> x;
			a *= 10;
			a += x;
		}
		v.pb (a);
	}
	sort (all (v));
	v.resize (unique (all (v)) - v.begin ());
	if (!v[0])
	{
		YES;
		stop;
	}
	for (int i = 0; i < v.sz; i ++)
		for (int j = i + 1; j < v.sz; j ++)
		{
			sum = v[i] + v[j];
			ok = 0;
			while (sum)
			{
				if (sum % 10 != 1 && (sum % 10))
					ok = 1;
				sum /= 10; 
			}
			if (!ok)
			{
				YES;
				stop;
			}
		}
	NO;
}
//Code by A....