#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define endl '\n'
#define INF (long long) 1e18 + 5 //Infinity
#define MOD 1000000007

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, x;
    cin>>n>>m;
    ll temp = m;
    multiset<ll> myset;
    for(ll i = 0; i < n; i++) {
    	cin>>x;
    	myset.insert(x);
    }

    ll maxm = *myset.rbegin();

    while(m) {
    	ll val = *myset.begin();
    	myset.erase(myset.begin());
    	myset.insert(val + 1);
    	m--;
    }

    cout<<*myset.rbegin()<<' '<<maxm + temp<<endl;

    return 0;
}
