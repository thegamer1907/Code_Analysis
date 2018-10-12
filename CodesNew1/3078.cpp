#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int,int> mpii;
typedef map<string,int> mpsi;
typedef set<int> si;
typedef set<ll> sll;
#define pb push_back
#define INF 1000000000
#define LINF INF*INF
#define all(x) x.begin(),x.end()
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int k;cin>>k;
	string s;cin>>s;
	int n=s.size();
	vi a(n+1);
	for(int i=0;i<n;i++)
		a[i+1]=a[i]+((s[i]=='1')?1:0);
	ll ans=0;
//	for(auto it:a)
//		cout<<it<<" ";
//	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		int m1=(int)(lower_bound(all(a),a[i-1]+k)-a.begin());
		int m2=(int)(lower_bound(all(a),a[i-1]+k+1)-a.begin());
		m1=max(m1,i);
		m2=min(m2,n+1);
		int t=max(m2-m1,0);
	//	int t=max(n-(int)(lower_bound(all(a),a[i-1]+k)-a.begin()),0);
//		cout<<m1<<" "<<m2<<" "<<" "<<n<<" "<<t<<endl;
		ans+=t;
	}
	cout<<ans<<endl;
	return 0;
}