#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define rep(i,start,lim) for(int i=start;i<lim;i++)
#define rep1(i,start,lim) for(int i=start; i<=lim; ++i)
#define repd(i,start,lim) for(int i=start;i>=lim;i--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define br cout<<"\n"
#define MOD (1000000007LL)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define eps (1e-6)
#define infll 9e18
#define inf 1e12
#define maxe 2000005
#define min_pq priority_queue<pair<pll,ll>, vector<pair<pll,ll> >, greater<pair<pll,ll> > >

using namespace std;

void pv(vector<ll> v){
	rep(i,0,v.size()){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ll test;
	test=1;
	//cin>>test;

	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

	while(test--){
		ll num;
		cin>>num;
		ll a[num];
		rep(i,0,num){
			cin>>a[i];
		}
		sort(a,a+num);
		// rep(i,0,num){
		// 	cout<<a[i]<<" ";
		// }
		ll ptr=num/2;
		ll ans=num;
		//cout<<endl;
		rep(i,0,num/2){
			if(2*a[i]>a[ptr]){
				while(ptr<num&&2*a[i]>a[ptr]){
					//cout<<"In case of "<<i<<" ptr was increased"<<endl;
					ptr++;
				}
			}
			if(ptr<num&&2*a[i]<=a[ptr]){
				//cout<<i<<" fitted into "<<ptr<<endl;
				ans--;
				ptr++;

			}
			
		}
		cout<<ans<<endl;

	}

}
