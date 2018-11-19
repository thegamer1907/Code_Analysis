#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define F first
#define S second
#define pb push_back
#define fo(i, n) for(int i = 1; i <= n; ++i)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int N = 200200;
const int mod = 1e9 + 7 ;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	cin >> s;
	int n;
	int ok=0;
	cin >> n;
	set<int>s1, s2;
	fo(i,n)
	{
		string a;
		cin >>a;
		if(a==s)
			ok=1;
		else
		{
			if(a[1]==s[0]) 
				s1.insert(i);
			if(a[0]==s[1])s2.insert(i);
		}
	}
	if(ok)
		return cout << "YES", 0;
	for(int x:s1)
		for(int y:s2)
				return cout<<"YES",0;
	cout<<"NO";
	return 0;
}
               