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
ll p[100005];

int main(){
    scanf("%lld%lld%lld", &n, &m, &k);
    for(ll i = 0; i < m; i++){
        scanf("%lld", &p[i]);
        p[i]--;
    }
    ll ans = 0;
    ll disc = 0;
    for(ll i = 0; i < m;){
        ll cnt = 1;
        for(ll j = 1; j < k && i+j < m; j++){
            if((p[i] - disc) / k == (p[i+j] - disc) / k){
                cnt++;
            }
        }
        //printf("  %lld\n", cnt);
        disc += cnt;
        ans++;
        i += cnt;
    }
    printf("%lld\n", ans);
}