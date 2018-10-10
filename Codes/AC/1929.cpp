#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <set>
#include <stack>
#include <cassert>
#include <queue>
#include <deque>

using namespace std;

typedef long long ll;
typedef long double ld;

#define int long long

//const int mod=1e9+7;
//const int inf=1e9+239+1329;

map<int, vector<int>> pos;

int get_aft(int need,int aft){
    
    if(pos.count(need)==0) return 0;
    int  tmp=upper_bound(pos[need].begin(), pos[need].end(), aft)-pos[need].begin();
    return (int)pos[need].size()-tmp;
}

int get_bef(int need,int bef){
    
    if(pos.count(need)==0) return 0;
    int tmp=lower_bound(pos[need].begin(), pos[need].end(), bef)-pos[need].begin()-1;
    //cout << tmp+1 << endl;
    return tmp+1;
    
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &t:a) cin >> t;
    for(int i=0;i<n;i++){
        pos[a[i]].push_back(i);
    }
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(a[i]%k!=0) continue;
        
        ans+=get_aft(a[i]*k, i) * get_bef(a[i]/k, i);
    }
    cout << ans << endl;
    
}
