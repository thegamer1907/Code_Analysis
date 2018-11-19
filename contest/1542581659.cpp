/*
author: Madhav Sainanee
*/
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int> >
#define vpll vector<pair<long long, long long> >
#define fup(i, a, n) for (ll i = a; i < n; i++)
#define fdw(i, a, n) for (ll i = n; i > a; i--)
#define fnu for(ll i = 0; i < n; i++)
#define fnd for(ll i = n-1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define cend cout << endl;

const ll mod = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    	// for getting input from input.txt
    	freopen("input.txt", "r", stdin);
    	// for writing output to output.txt
    	freopen("output.txt", "w", stdout);
	#endif
	
	float h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	float a[3], a1, a2;
	a1 = (30*t1);
	a2 = (30*t2);
	a[0] = 6*s;
	a[1] = 6*m + s/10;
	a[2] = (30*h + m/2 + s/120);
	if(a[2] > 360)
	{
		a[2] -= 360;
	}
	bool flag1 = 0, flag2 = 0;
	m = max(a1, a2);
	// int x = 250;
	// if (a1 < x < a2)
	// {
	// 	cout << "YO";
	// }
	if(m == a1)
	{
		swap (a1, a2);
	}
	// if(a1<a[2] && a[2]< a2)
	// {
	// 	cout << "FUCK OFF";
	// }
	//cout << a[0] << " " << a[1] << ' ' << a[2] << ' ' << a1 << ' ' << a2; 
	// if(!(a1 < a[0] < a2 && a1 < a[1] < a2 && a1 < a[2] < a2))
	// {
	// 	cout << "NO PROBLEM";
	// }
	if((a1 < a[0] && a[0] < a2 || a1 < a[1] && a[1] < a2 || a1 < a[2] && a[2] < a2) && !(a1 < a[0] && a[0] < a2 && a1 < a[1] && a[1] < a2 && a1 < a[2] && a[2] < a2))
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}