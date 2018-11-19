//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
const ll mod = ll(1e9 + 7);

int main()
{
	Compiler_Beso

		string s, a[105]; int t;
	cin >> s >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	bool f = 0, f1 = 0;
	for (int i = 0; i < t; i++)
	{
		if (a[i] == s)
		{
			cout << "YES";
			return 0;
		}
		if (s[0] == a[i][1])f = 1;
		if (s[1] == a[i][0])f1 = 1;
	}

	if (f&&f1)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}