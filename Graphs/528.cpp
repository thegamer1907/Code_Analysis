#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
#define INF (long long) 1e18 + 5 //Infinity
#define MOD 1000000007

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--) {
    	for(ll i = 0; i < n - 1; i++) {
    		if(s[i] == 'B' && s[i + 1] == 'G') {
    			s[i] = 'G';
    			s[i + 1] = 'B';
    			i++;
    		}
    	}
	}

	cout<<s;
    
    return 0;
}
