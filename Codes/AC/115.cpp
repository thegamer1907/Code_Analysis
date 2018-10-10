#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif


#define ll long long 
#define ld long double
#define pb push_back
#define F first
#define S second
#define I insert
#define pll pair<ll,ll> 
#define vll vector<ll> 
#define vpll vector< pll >

int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout<<setprecision(25);
	vector<ll> v;ll a,b,c,d,i,j,k;
	ll n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;v.pb(a);
	}
	sort(v.begin(),v.end());ll q;cin>>q;
	while(q--){
		ll x;
		cin>>x;
		ll hi=n-1;ll mid,lo=0;
		if(v[hi]<=x){cout<<n<<"\n";continue;}
		while(hi>lo){
			mid=(hi+lo)/2;
			if(v[mid]<=x)lo=mid+1;
			if(v[mid]>x)hi=mid;		
		}
		mid=(hi+lo)/2;
		cout<<mid<<"\n";
	}
	return 0;
}