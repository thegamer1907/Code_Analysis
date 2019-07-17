#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <chrono>
#include <random>
#include <tuple>
#include <utility>
#include <fstream>
#include <complex>

typedef long long ll;

const ll INF = (1l << 30);
const ll LINF = (1l << 60);

ll n, m, k;
std::vector<ll> p;

int main(){
    scanf("%lld%lld%lld", &n, &m, &k);
    for(ll i = 0; i < m; i++){
        ll a;
        scanf("%lld", &a);
        p.push_back(a-1);
    }
    ll ans = 0;
    ll disc = 0;
    for(ll i = 0; i < m;){
        ll cnt = (lower_bound(p.begin(), p.end(), ((p[i] - disc) / k + 1) * k + disc) - p.begin()) - i;
        //printf("  %lld\n", cnt);
        disc += cnt;
        ans++;
        i += cnt;
    }
    printf("%lld\n", ans);
}