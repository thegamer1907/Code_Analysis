#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <tuple>
#include <numeric>
#define MAXX 150000
#define ll long long
using namespace std;


ll to_be_erased[111111];


int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    
    set<ll> special_items;
    for(int i=0;i<m;i++) {
        ll x;
        cin>>x;
        special_items.insert(x);
    }
    
    ll offset = 0;
    ll ans=0;
    while(!special_items.empty()) {
        
        
        
        ll x = *special_items.begin();
        
        // x / k
        ll page_id = (x-offset-1)/k;
        
        offset += page_id*k;
        
        
        
        
        
        int sz=0;
        for(ll x : special_items) {
            if (x - offset <= k) {
                to_be_erased[sz++]=x;
            } else {
                break;
            }
        }
        
        
        offset += sz;
        
        for(int j=0;j<sz;j++) {
            special_items.erase(to_be_erased[j]);
        }
        
        
        
        
        
        ans++;
    }
    
    cout << ans << endl;
    
    
    
    
    
    
    
}