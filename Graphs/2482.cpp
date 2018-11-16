#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define sf scanf
#define pf printf
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define hell 1000000007
#define endl "\n"
#define inc(i,a,b) for(i=a;i<b;i++)
#define dec(i,a,b) for(i=a;i>b;i--)

vector<ll> v[10001];
ll color[10001];

int main()
{
	ll t=1,n,m,i,j,k,sum=0,ans=0;
	string s;
	cin>>n;
	for(i=2;i<=n;i++){
		cin>>k;
		v[k].pb(i);
	}
	for(i=0;i<n;i++){
		cin>>color[i+1];
	}
	ans=1;
	queue<ll> q;
	q.push(1);
	while(!q.empty()){
		k=q.front();
		for(i=0;i<v[k].size();i++){
			if(color[v[k][i]]!=color[k]){
				ans++;
			}
			q.push(v[k][i]);
		}
		q.pop();
	}
	cout<<ans;
	return 0;
}