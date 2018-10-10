#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
vector<ll>v;
void dp(ll x, ll len,ll sum){
//	cout<<s<<" "<<len<<" "<<sum<<endl;
	if(len==0){
		if(sum==10)v.pb(x);
		return ;
	}
	for(ll i=0;i<=9;i++){
		ll tmp = sum+i;
		if(tmp<=10)dp(x*10ll+i,len-1,tmp);
	}
}
int main(){
	dp(0,8,0);
	sort(v.begin(),v.end());
	ll k; 
	cin>>k;
	cout<<v[k-1]<<endl;
	
	return 0;
}
