#include<iostream>
using namespace std;
#include<string>
#define REP(i,a,b) \
for(int i=a; i<b; i++)
#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
int main()
{
	set<string> poland,enemy,commonset;
	int n,m;
	cin >> n >> m;
	REP(i,0,n)
	{
		string s;
		cin >> s;
		poland.insert(s);
	}
	REP(i,0,m)
	{
		string s;
		cin >> s;
		if(poland.find(s) != poland.end())
		{
			commonset.insert(s);
		}
		enemy.insert(s);
	}
	int polval = poland.size()+(commonset.size()+1)/2;
	int enemyval = enemy.size() + commonset.size()/2;
	if(polval > enemyval)cout <<"YES";
	else cout <<"NO";
}



