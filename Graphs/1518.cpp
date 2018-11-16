//               _/_/_/_/  _/_/      _/    _/     _/_/_/_/  _/_/   _/       _/
//              _/        _/  _/     _/    _/    _/    _/  _/  _/   _/     _/
//             _/_/_/_/  _/    _/    _/    _/   _/_/_/_/  _/    _/   _/   _/
//                  _/  _/_/_/_/_/   _/    _/  _/  _/    _/_/_/_/_/   _/ _/
//           _/_/_/_/  _/        _/  _/_/_/_/ _/    _/  _/        _/   _/
#include<bits/stdc++.h>
#define ll long long
#define vsort(v) sort(v.begin(),v.end())
#define asort(arr,n) sort(arr,arr+n)
#define pb(a) push_back(a)
#define mpp(i,j) make_pair(i,j)
#define f first
#define ss second
#define rep(i,l,n) for(i=l;i<n;i++)
#define chk cout<<"YES";
#define input freopen("new.txt","r",stdin)
#define amin(arr,n) *min_element(arr,arr+n)
#define amax(arr,n) *max_element(arr,arr+n)
#define MOD 1000000007
using namespace std;
map<ll,ll> mp;
set<ll> st;
string ch,ch2;
stack<string> s,ans;
int main()
{
	ll i,j,k,t,l,n,m,a,b,x,y;
	cin>>n>>m;
	if(m==1)
	{
		cout<<"YES";
		return 0;
	}
	ll arr[100005];
	for(i=1;i<=n-1;i++)
	{
		cin>>k;
		arr[i]=i+k;
	}
	ll visit[100005];
	memset(visit,0,sizeof(visit));
	ll flag=0;
	for(i=1;i<=1;i++)
	{
//		cout<<i<<endl;
		if(visit[i])
		continue;
		if(flag)
		break;
		j=i;
//		visit[i]=1;
        if(j==m)
        flag=1;
		while(j!=m && visit[j]==0)
		{
//			cout<<j<<" "<<arr[j]<<endl;
			visit[j]=1;
			if(j==m)
			flag=1;
			j=arr[j];
			if(j==m)
			flag=1;
		}
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
