#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

struct Node {
    ll c;
    vector<ll> ch;
};

Node T[10005];

ll dfs(ll x, ll c) {
    ll r=0;
    for(ll i=0;i<T[x].ch.size();i++){
        ll nx = T[x].ch[i];
        r = r + dfs(nx, T[x].c);
    }
    if (T[x].c != c) r++;
    return r;
}

int main()
{
    //ifstream cin("in.in");
    ll n;
    cin >> n;
    for(ll i=1; i<n; i++){
        ll p;
        cin >> p;
        p--;
        T[p].ch.push_back(i);
    }
    for(ll i=0; i<n; i++) {
        cin >> T[i].c;
    }
    cout << dfs(0, -1);
}
