//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize ("Ofast")
//#pragma comment(linker, "/stack:200000000000")
//#pragma warning (disable : 4996)
//#pragma optimize ("gtsy", on)


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

//#define int long long

vector<int> a;
int n;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    a.resize(n);
    for(auto &t:a) cin >> t;
    int ans=1;
    int tmp=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) tmp++;
        else{
            ans=max(tmp,ans);
            tmp=1;
        }
    }
    ans=max(tmp,ans);
    cout << ans << endl;
}
