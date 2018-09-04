#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

#define fi first
#define se second

const int MAXN = 1e5 + 100;

int N;

typedef long long ll;

vector<pair<ll, int>> vec;

inline ll Ceil_div(ll a, ll b) {
    if(a % b != 0) return a / b + 1;
    return a / b;
}

inline ll work(ll i, ll num) {
    if(i == 0) {
        if(!num) return 0;
        return Ceil_div(num, N) * N;
    } else {
        if(num <= i) return i;
        else {
            // return (((num - i) / N) + 1) * N + i;
            return Ceil_div(num - i, N) * N + i;
        }
    }
}

int main() {
    cin.tie(nullptr);
    cin >> N;int a;
    for(int i=0;i<N;++i) {
        cin >> a;
        vec.push_back({work(i, a), i});
    }
    sort(vec.begin(), vec.end());
    cout << vec[0].se + 1;
    return 0;
}