#include<bits/stdc++.h>

#define fi first
#define se second

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = 5e5;

ll n, m, i, j, l, r, x, y, sum, col, ans, i1;

vector <ll> v;
string s[N], S, k, t;

int main(){
    cin >> S >> n;
    t = S;
    for(i = 0; i < n; ++ i)cin >> s[i];
    if(S.size() == 1)for(i = 0; i < n; ++ i)if(s[i][0] == S[0] || s[i][1] == S[0])return cout << "YES", 0;
    if(S.size() == 1)return cout << "NO", 0;
    sort(s, s + n);

    for(i = 0; i < n; ++ i){
        if(s[i] == S)S.erase(0, 2);
        else if(s[i][1] == S[0])S.erase(0, 1);

        while(S.size() > 0){
            k = S.substr(0, min(2, int(S.size()) ));
            i1 = lower_bound(s, s + n, k) - s;
            if(S.size() == 1 && s[i1][0] != k[0] || S.size() > 1 && s[i1] != k)break;
            S.erase(0, k.size());
        }
        if(S.size() == 0)return cout << "YES", 0;
        S = t;
    }
    cout << "NO";


}
