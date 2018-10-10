#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
#define vs vector<string>
#define vvs vector<vector<string>>
#define ll long long
#define vi vector<ll>
#define vll vector<long long>
#define vvi vector<vector<ll>>
#define pii pair<ll,ll>
#define fu(i,a,b) for(ll i=a;i<=b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define sl(s) s.length()
#define vl(v) v.size() 
#define pv(v) for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl
#define ps(s) for(ll i=0;i<s.length();i++)cout<<s[i]<<" ";cout<<endl
#define F first
#define S second

using namespace std;
ll hell=1e9+7;
ll m,n,k;
ll cnt(ll x){
	ll ans=0;
	for(ll i=1;i<=m;i++){
		if(i>x)break;
		else if(i*n<x){
			ans+=n;continue;
		}else{
			ans+=x/i;
		}
	}
	return ans;
}

ll solve(){
	ll lo=1;ll hi=1e12;
	ll ans=-1;
	while(lo<=hi){
		ll mid=lo+(hi-lo)/2;
		ll p=cnt(mid);
		//cout<<lo<<" "<<hi<<" "<<p<<endl;
		if(p>k){
			hi=mid-1;
		}else if(p<k){
			lo=mid+1;
		}else{
			ans=mid;hi=mid-1;
		}
	}
	return lo;
}
int main(){
	cin>>m>>n>>k;
	cout<<solve();
 	return 0;
}