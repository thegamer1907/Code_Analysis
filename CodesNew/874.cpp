#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	string s;
	map <string , int> a,b;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		a[s] = 1;
	}
	int same = 0;
	for(int i=0;i<m;i++)
	{
		cin>>s;
		if(a.find(s) != a.end())
			same++;
		else
			b[s]++;
	}
	int x=0,y=0;
	
	x = a.size() - same;
	y = b.size();
	
	x += (same+1)/2;
	y += (same)/2;
	
	if(x <= y)cout<<"NO";
	else cout<<"YES";
	return 0;
}