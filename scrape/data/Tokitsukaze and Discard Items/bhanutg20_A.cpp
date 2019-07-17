#include <bits/stdc++.h>
#define endl '\n'
#define all(c) c.begin(), c.end()

using namespace std;

typedef long long int ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ld PI = 3.141592653589793;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> v(m);
    for (int i=0; i<m; i++) cin>>v[i];
    ll i=0;
    ll be=1+((v[0]-1)/k)*k, en=be+k-1;
    ll ans=0,cnt=0;
    while (i!=m) {
    	if (v[i]>=be && v[i]<=en) {cnt++; i++;}
    	else {
    		if (cnt==0) {be=en+1+((v[i]-en-1)/k)*k; en=be+k-1;}
    		else {en+=cnt; cnt=0; ans++;}
    	}
    }
    if (cnt!=0) ans++;
    cout<<ans;
    
    cerr<<"Time Lapsed : " <<1.0*clock()/CLOCKS_PER_SEC<<endl;
    return 0;
       }