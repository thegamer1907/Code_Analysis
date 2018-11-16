#include <bits/stdc++.h>

using namespace std;

const int MAXN = 102000 ;

string s;
int m,n,ans,x,y;
int aya[MAXN];
int sumi[MAXN];

int main() {
	
	cin>>s>>m;
	n=s.length();
	for (int i = 0; i < n-1; i++)
	{
		if (s[i]==s[i+1])
			aya[i]=1;
	}
	sumi[0]=aya[0];
	for (int i = 1; i < n; i++)
	{
		sumi[i]=sumi[i-1]+aya[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin>>x;
		cin>>y;
		if (x>=2)
			ans=sumi[y-2]-sumi[x-2];
		else
			ans=sumi[y-2];
		cout<<ans<<endl;
	}

	return 0;
}