#include <bits/stdc++.h>
using namespace std;
const int maxn = 2000010;
string a,b;int vis[maxn],s[maxn];
int main(int argc, char const *argv[])
{
	cin>>a>>b;
	int n=a.size(),m=b.size();
	for(int i=1;i<=n;i++)scanf("%d",&s[i]),s[i]--;
	int l=0,r=n,fg=0,rr=0;
	while(l<=r)
	{
		int mid = (r+l)/2;string t="";
		for(int i=1;i<=mid;i++)vis[s[i]]=1;
		for(int i=0;i<a.size();i++)if(!vis[i])t+=a[i];
		for(int i=1;i<=mid;i++)vis[s[i]]=0;rr=0;
		for(int i=0;i<t.size();i++){if(t[i]==b[rr])rr++;if(rr==b.size())break;}
		if(rr==b.size())l=mid+1;
		else r=mid-1;
	}
	printf("%d\n",r );
	return 0;
}