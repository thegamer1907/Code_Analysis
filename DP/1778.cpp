//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<numeric>
#include<cmath>
#include<bitset>
using namespace std;
#define ll long long 
int main()
{
	map<ll, ll>mp;
	ll a, b, c, n, m, x, y, res = 0;
	vector<ll>v;
	//vector<pair<ll, ll>>p;
	//cin >> n;
	/*
	for (int i = 0; i < n; i++)
	{
	cin >> x;
	v.push_back(x);
	}
	*/
	/*	for (int i = 0; i < n; i++)
	{
	cin >> x>>y;
	p.push_back(make_pair(x,y));
	}*/
	//sort(v.begin(),v.end());
	//reverse(v.begin(), v.end());
	string s, t;
	cin >> s;
	vector<ll>ab, ba;
	n = s.size();
	for (int i = 0; i < n-1; i++)
	{
		if (s[i] == 'A' && s[i + 1] == 'B')
		{
			ab.push_back(i);
		}else
		if (s[i] == 'B' && s[i + 1] == 'A')
		{
			ba.push_back(i);
		}
	}

	
		for (int i = 0; i < ab.size(); i++)
		{
			for (int j = 0; j < ba.size();j++)
			if (abs(ab[i] - ba[j]) >= 2)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	
	cout << "NO";
	cout << endl;



	return 0;
}