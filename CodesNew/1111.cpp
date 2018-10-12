#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;
#define N  100005

ll int solve(ll int k,ll int n){
	ll int ans=0,c=0;
	while(n>0){
		if(c%2==0 && n>=k){
			n-=k;
			ans+=k;
		}
		else if(c%2==0){
			ans+=n;
			n-=n;
		}
		else {
			n-=(n/10);
		}
		c++;
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		ll int n;
		cin>>n;
		if(n<=21){
			cout<<1;
			return 0;
		}
		ll int low=1,high=n,mid;
		while(high-low>1){
			mid = (low + high) /2;
			if(solve(mid,n)>=(n%2==0?n/2:(n/2)+1)) high=mid;
			else low=mid;
		}
		if(solve(low,n)>=(n%2==0?n/2:(n/2)+1)) cout<<low;
		else cout<<high;
	}
	return 0;
}
