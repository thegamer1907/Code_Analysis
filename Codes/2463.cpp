#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define Aloveg ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const int mn = 1e7+5;

ll cnt[mn], pre[mn];
bool p[mn];

int main()
{
    Aloveg

	int n; cin>>n;
	ll a; 
	for(int i = 0; i < n; i += 1){
		cin>>a;
		cnt[a] += 1;
	}
	for(int i = 2; i < mn; i += 1){
		if(!p[i]){
			for(int j = i; j < mn; j += i){
				p[j] = 1;
				pre[i] += cnt[j];
			}
		}
		pre[i] += pre[i-1];
	}
    ll t, l, r; cin>>t;
    while(t--) {
		cin >> l >> r;
		if(r >= mn) r = mn - 1;
		if(l >= mn) l = mn - 1;
		cout<<pre[r] - pre[l-1]<<"\n";
    }
    
    return 0;
}


