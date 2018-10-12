#include <bits/stdc++.h>
using namespace std;
// #define int long long int 
#define ld double
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define ff first
#define ss second
#define pint pair <int,int>
#define nl "\n"
int a[1000002];
int mq[10000002],prime[10000002],ans[10000002],cnt[10000002];
void soe()
{
	for(int i=1;i<=10000001;i++)
		prime[i]=1;
	for(int i=2;i<=10000001;i++)
		if(prime[i])
		{
			cnt[i]+=mq[i];
			for(int j=2*i;j<=10000001;j+=i)
			{
				cnt[i]+=mq[j];
				prime[j]=0;
			}
		}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		mq[a[i]]++;
	}
	soe();
	int q;cin>>q;
	ans[1]=0;
	for(i=2;i<=10000001;i++)
		ans[i]=ans[i-1]+cnt[i];
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		if(l>=1e7)
			l=1e7-1;
		if(r>=1e7)
			r=1e7-1;
		cout<<ans[r]-ans[l-1]<<nl;
	}
	return 0;
}
