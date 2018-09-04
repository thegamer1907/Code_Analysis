#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 812
    Task : C
*/

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, s;
    cin >> n >> s;
    vi v(n);
    for(int &i : v)
    	cin >> i;
    ll l = 0, r = n;
    pii best = {0, 0};
    while(l <= r){
    	ll m = (l+r)/2;
    	vll prices(n);
    	for(int i = 0; i < n; i++)
    		prices[i] = v[i] + (i+1)*m;
    	nth_element(prices.begin(), prices.begin() + m, prices.end());
    	ll x = 0;
    	for(int i = 0; i < m; i++)
    		x += prices[i];
    	if(x <= s){
    		best.first = m;
    		best.second = x;
    		l = m+1;
    	}
    	if(x > s)
    		r = m-1;
    }
    cout << best.first << ' ' << best.second;
}