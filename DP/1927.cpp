#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n>>m;
	int s[n];
	for(int a=0;a<n;a++) cin>>s[a];
	vector<int >v(n);
	set<int >ss;
	for(int a=n-1;a>=0;a--)
	{
		ss.insert(s[a]);
		v[a]=ss.size();
	}
	int x;
	while(m--)
	{
		cin>>x;
		cout<<v[x-1]<<endl;
	}
	return 0;
}
