#include <bits/stdc++.h>

#define ll long long
#define sz size()
#define all(xx) xx.begin(),xx.end()
#define pb push_back
#define in insert
#define er erase
#define x1 pascal
#define y1 java
#define x2 php
#define y2 pyton
#define x3 ruby
#define y3 cpp
#define x4 delphi
#define y4 perl
#define S second
#define F first
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
const int KK = 1e4 + 123;

int h, m, s, tt, t1, t2;

int main ()
{
	speed;
	cin >> h >> m >> s >> t1 >> t2;
	if (t1 == 12)
		t1 = 0;
	else
		t1 *= 5;
	if (t2 == 12)
		t2 = 0;
	else
		t2 *= 5;
	tt = t1;
	if (h == 12)
		h = 0;
	else
		h *= 5;
	if (s)
		m ++;
	if (m)
		h ++;
	while (2)
	{
		if ((h == tt || s == tt || m == tt))
		{
			break;
		}
		if (tt == t2)
		{
			YES;
			return 0;
		}
		if (tt == 59)
			tt = 0;
		else
			tt ++;
	}
	tt = t1;
	while (2)
	{
		if (tt == t2)
		{
			YES;
			return 0;
		}
		if ((h == tt || s == tt || m == tt))
		{
			break;                         
		}
		if (tt == 0)
			tt = 59;
		else
			tt --;
	}
	NO;
}