#include <iostream>
#include <set>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define sd(x) scanf("%d",&x);
#define sll(x) scanf("%I64d",&x);

int main()
{
	string s,t;
	set<char> sc,ec;
	int n;
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> t;
		if(s.compare(t) == 0)
		{
			cout<<"YES";
			return 0;
		}
		sc.insert(t[0]);
		ec.insert(t[1]);
	}
	if(sc.count(s[1]) == 1 && ec.count(s[0]) == 1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}