#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
int main(){
FASTIO	
ll n,m,k;
cin>>n>>m>>k;
set<ll> s;
ll a[m];
for(ll i=0;i<m;i++){
  cin>>a[i];
}
sort(a,a+m);
ll cnt1=0;
ll cnt=0;
ll i=1;
int ans=0;
for(int j=0;j<m;){
	bool is=true;
	while((j<m)&&((a[j])<=(i*k+cnt1))){
		cnt++;
		j++;
		if(is){
			ans++;
			is=!is;
		}
	}
	if(j<m){
	 cnt1+=cnt;
	 cnt=0;
	 //ans++;
	 if((a[j])<=(i*k+cnt1)){
	 	continue;
	 }	
	 else{
		ll p=(a[j]-cnt1)/k;
		if(((a[j]-cnt1)%k)!=0){
			p++;
		}
	    i=p;
	 }
    }
}
//cout<<"\n";
cout<<ans;
}