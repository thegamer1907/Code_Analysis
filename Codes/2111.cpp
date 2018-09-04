#include <bits/stdc++.h>

using namespace std;

const int N=1000070; //10e6

#define ll long long int
#define inf 0x3f3f3f3f
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define ii tuple<int, int>
#define all(x) (x).begin(), (x).end()

ll a[N];
ll l[N];
map<ll, ll>ri, le;

int main(int argc, char const *argv[]){
	int n;
	ll k;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	ll ans=0;
	for(int i=0; i<n; i++){
		if(a[i]%k==0)l[i]=le[a[i]/k];
		le[a[i]]++;
	}
	for(int i=n-1; i>=0; i--){
		ans+=l[i]*ri[a[i]*k];
		ri[a[i]]++;
	}
	cout << ans << endl;
	return 0;
}