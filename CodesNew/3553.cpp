#include<bits/stdc++.h>
#define lli  long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int mod=1e9+7;
int main()
{
	fast;
		lli n,i,m,sum=0,x,mx=0;
		cin>>n>>m;
		for(i=0;i<n;i++){
			cin>>x;
			sum+=x;
			mx=max(mx,x);
		}
		lli ans;
		ans=(sum+m-1)/n+1;
		cout<<max(mx,ans)<<" "<<mx+m;
}

