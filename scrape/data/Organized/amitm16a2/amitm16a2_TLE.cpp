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

	//vector<ll>q;
	ll i=1;
	ll j=0;
	ll count=0;
	ll t=k;
	ll ans=0;
	ll size=0;

	while(j<m && i<=n){

		if(a[j]!=i){
			//q.pb(i);
			i++;			
			t--;
			size++;
		}
		else if(a[j]==i){
			count++;
			j++;
			i++;
			t--;
		}

		if(t==0){
			if(count>0){
			ans++;
			count=0;
			
		}
		t=k-size%k;
		
			
				


		}

	}
	if(count>0){
			ans++;
			count=0;
			//t=k-q.size()%k;
			//cout<<q.top()<<" " <<t<<endl;
		}
	cout<<ans<<endl;
	
	return 0;
}