#define B368
#ifdef B368
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvd> vvvd;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<viii> vviii;
typedef vector<vii> vvii;
typedef  stack<int> si;
typedef queue<int> qi;
typedef map<int,int> mii;
typedef queue<ii> qii;
typedef pair<int , double> id;
typedef vector<id> vid;
typedef vector<vid> vvid;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef unsigned long long ull;
typedef pair<double , double > dd;
typedef vector<dd> vdd;
#define inf 10000000
#define sup 1e-9
#define pi acos(-1)
#define biginf 1000000000000000000


int main(){
    ios::sync_with_stdio(0);
    int n, m, cnt = 0; cin >> n >> m;
    vi num(n + 2), sum(n + 2, 0);
    map<int, int> mp;
    for (int i = 1; i <= n; ++i) {
        cin >> num[i];
    }
    for(int i = n; i >= 1; i--){
        if(!mp[num[i]]) cnt++, sum[i] = cnt;
        else sum[i] = sum[i + 1];
        mp[num[i]]++;
    }
    for (int j = 0; j < m; ++j) {
        int a; cin >> a;
        cout << sum[a] << endl;
    }

    return 0;
}


#endif
