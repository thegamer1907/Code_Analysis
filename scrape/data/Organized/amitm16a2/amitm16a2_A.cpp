/* ****amitm16a2**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define mp          make_pair
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n,m,k;
	cin>>n>>m>>k;

	ll a[m];

	rep(i,0,m)
	cin>>a[i];

	ll s=1;
	ll e=s+k-1;
	ll count=0,rem=0;
	ll ans=0;

	for(ll i=0; i<m; i++){

		if(a[i]-rem>=s && a[i]-rem<=e){
			count++;
			continue;
		}

		if(count>0)
			ans++;

		rem+=count;
		count=0;
		s=((a[i]-rem-1)/k)*k +1;
		e=s+k-1;

		if(a[i]-rem>=s && a[i]-rem<=e){
			count++;
			continue;
		}


	}

	if(count>0)
		ans++;

	cout<<ans;
	
	return 0;
}