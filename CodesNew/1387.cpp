#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <functional>
#include <random>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;

const int INF = 2e9+5;

/*
    filippos
    Contest : 371
    Task : C
*/

int main(){
    cin.tie(0), cin.sync_with_stdio(0), cout.tie(0), cout.sync_with_stdio(0);
    
    string s; cin >> s;
    vector<ll> rec(3);
    for(char &c : s)
    	rec[c == 'B' ? 0 : (c == 'S' ? 1 : 2)]++;

    vector<ll> disp(3), cost(3);
    for(ll &i : disp)
    	cin >> i;
    for(ll &i : cost)
    	cin >> i;

    for(int i = 0; i < 3; i++)
        if(rec[i] == 0)
            disp[i] = 0;
    
    ll r; cin >> r;

    ll ans = 0;

    //might be useful later

    ll whole = 0;
    for(int i = 0; i < 3; i++)
    	whole += rec[i] * cost[i];

    //we count the free ones
    ll free = INF;
    for(int i = 0; i < 3; i++){
    	if(rec[i])
    		free = min(free, disp[i] / rec [i]);
    }

    ans += free;

    for(int i = 0; i < 3; i++)
    	disp[i] -= rec[i] * free;


    //now we try to process what's left


    while(r > 0 && *max_element(disp.begin(), disp.end()) > 0){
    	ll x = whole;
    	for(int i = 0; i < 3; i++){
			int f = min(disp[i], rec[i]);
			disp[i] -= f;
			x -= f * cost[i];   		
    	}
    	if(x <= r) r -= x, ans++;
    	else break;
    }

    //now either finished our ingredients or our money

    ans += r / whole;

    cout << ans;

    return cout << '\n', 0;
}