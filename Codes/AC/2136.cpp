#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
typedef long long ll;
int n,k;
int a[MAXN];
bool b[MAXN]={0};
int l[MAXN]={0};
int cnt[40],cnt2[40];
ll f[MAXN]={0},f2[MAXN]={0};
map<ll,int> S; 
map<ll,int>::iterator it; 
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]); 
	}
	for(int i=1;i<=n;i++)
	{
		if (a[i]%k==0&&S.find(a[i]/k)!=S.end()) f[i]=S[a[i]/k];

		it=S.find(a[i]);
		if (it==S.end()) S[a[i]]=1;
		else S[a[i]]++;	
		
	}
	S.clear();
	for(int i=n;i;i--)
	{
		if (S.find((ll)(a[i])*k)!=S.end()) f2[i]=S[((ll)(a[i])*k)];
		it=S.find(a[i]);
		if (it==S.end()) S[a[i]]=1;
		else S[a[i]]++;	
		
	}
	ll ans=0;
	for(int i=1;i<=n;i++) 
	ans+=f[i]*f2[i];	
	cout<<ans<<endl; 
	return 0;
}
