// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <math.h>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include <queue>
#include <deque>


#define  all(v)         ((v).begine()),((v).end())
#define  sz(v)	        ((int)(v).size())
#define	 clr(v,d)       memset(v,d,sizeof(v))
#define  lp(i,n)        for(int i=0; i<n; i++)
#define  lpi(i,j,n)     for(int i=j; i<n; i++)
#define  lpd(i,j,n)     for(int i=j; i>=n; i--)
const double E = 1e-12;

typedef  long long ll;
typedef  long double ld;
/*typedef  vector<int> vi;
typedef  vector<char> vc;
typedef  vector<string> vs;
typedef  vector<bool> vb();
*/
using namespace std;

void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	fast();
	int n, m = 0;
	string a;
	cin >> a;
	cin >> n;
	int s1 = 0, s2 = 0;
	string f = a;
	f[0] = a[1];
	f[1] = a[0];
	while (n--)
	{
		string s;
		cin >> s;
		if (s == a || s == f)
			m = 1;
		if (s[0] == a[1])
			s1 = 1;
		if (s[1] == a[0])
			s2 = 1;
	}
	if (m == 1 || s1 == 1 && s2 == 1)
		cout << "YES";
	else cout << "NO";

//		system("pause");
	return 0;
}
/*
freopen("circle.in", "r", stdin);
freopen("circle.out", "w", stdout);
cout<<fixed<<setprecision(7);
*/