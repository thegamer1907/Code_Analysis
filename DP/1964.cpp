#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	vector <long long > v;
	
	ll n,m,x,y;
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		v.push_back(x);
	}
	
	ll count[n+1];
	map <ll,bool> mp;
	
	for(int i=n-1;i>=0;i--)
	{
		mp[v[i]]=true;
		count[i]=mp.size();
	}
	
	
	for(int i=0;i<m;i++)
	{
		cin >> y;
	    cout << count[y-1] << endl;
	}
}
