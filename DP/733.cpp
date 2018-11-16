#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length(),x,y,m,otv=0;
	s='$'+s;
	vector<int>v(n+1,0);
	for(int i=1;i<=n;i++)
	{
		v[i]+=v[i-1];
		if(s[i]==s[i-1])
		v[i]++;
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		cout<<v[y]-v[x]<<endl;
	}
	return 0;	
}