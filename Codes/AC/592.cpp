#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ff first
#define ss second
bool check(ll x) {
	int ans=0;
	while(x!=0) {
		ans+=x%10;
		x=x/10;
		if(ans>10) return false;
	}
	if(ans==10) return true;
	return false;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    ll ans=10;  int k;  cin>>k; 
    while(k!=0) {
    	ans+=9;
    	if(check(ans)) k--;
 	}
 	cout<<ans<<endl;
	return 0;
}