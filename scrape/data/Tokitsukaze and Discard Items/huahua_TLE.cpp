#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int maxn = 200005;

int main()
{
	ll n,m, k,p[maxn];
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
		cin>>p[i];
	ll t=k,b=0,sum=0;
	while(b<m){
		if(t>=p[b]){
			ll nxt=upper_bound(p+b,p+m,t)-p;
			t+=nxt-b,b=nxt,sum++;
		}
		else t+=k;
	}
	cout<<sum<<endl;
	return 0;
}