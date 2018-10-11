// icst and i'll ngu { you know it :) }  
#include <bits/stdc++.h>
using namespace std;
const int N = 1234567;
const int mod = 1e9+7;
typedef long long ll;
#define mp make_pair
#define pb push_back
int main()
{
	// ios_base:: sync_with_stdio(false); cin.tie(0);
	// freopen ("inp","r",stdin);
	// freopen ("out","w",stdout);
	int n,m;
	cin>>n>>m;
	string s;
	set<string>p,e;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		p.insert(s);
	}
	for(int i=0;i<m;i++)
	{
		cin>>s;
		e.insert(s);
	}
	int cnt=0;
	for(string s : p)
	{
		if(e.find(s)!=e.end())cnt++;
	}
	n=n-cnt;
	m-=cnt;
	if(cnt%2==0)
	{
		if(n>m)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
	{
		if(n>=m)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}