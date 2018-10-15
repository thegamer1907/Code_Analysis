#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mp make_pair
int main(){
	multiset<ll> s1,s2;
	vector<ll> vec;
	ll n;
	cin>>n;
	for (ll i = 0; i < n; ++i)
	{
		ll temp;
		cin>>temp;
		vec.pb(temp);
	}
	sort(vec.begin(),vec.end());
	for(ll i=0;i<(n/2);i++){
		s1.insert(vec[i]);
	}
	for(ll i=n/2;i<n;i++){
		s2.insert(vec[i]);
	}
	multiset<ll>::iterator it;
	for(it=s1.begin();it!=s1.end();it++){
		ll temp=2*(*it);
		multiset<ll>:: iterator x;
		x=s2.lower_bound(temp);
		if(x!=s2.end())
			s2.erase(x);
	}
	cout<<s1.size()+s2.size();
	return 0;
}
