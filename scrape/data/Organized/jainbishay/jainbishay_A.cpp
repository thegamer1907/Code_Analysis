#include<bits/stdc++.h>
#define ll long long
#define fs first
#define sec second
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> v(m);
    for(ll i=0;i<m;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    if(k==1){
    	cout<<m;
    	return 0;
    }
    ll c=0,ans=0,p=1;
    while(c<m){
    	if(v[c]-c-1>=p*k){
    		p=(v[c]-c-1)/k;
    		p++;
   		}
    	ll in;
    	in=upper_bound(v.begin(),v.end(),p*k+c)-v.begin();
    	c=in;
    	//cout<<in<<endl;
    	ans++;
    	
    }
    cout<<ans;
    return 0;
}