#include <bits/stdc++.h>
#define EPS 1e-38
#define OO 1e9
#define ll long long
#define forn(i, n) for(int i = 0;i < n;i++)
const ll MOD = 1000000007;
using namespace std;
vector<ll> pr;
ll lp[10000001];
ll sum[10000001];

int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    for(int i = 2;i <= 10000000;i++){
        if(lp[i] == 0){
            lp[i] = i;
            pr.push_back(i);
        }
        for(int j = 0;j < pr.size() && pr[j] <= lp[i] && i*pr[j] <= 10000000;j++){
            lp[i * pr[j]] = pr[j];
        }
    }
    ll n;
    cin >> n;
    ll arr[n];
    forn(i,n){
        scanf("%lld", &arr[i]);
        while(arr[i] != 1){
            ll div = lp[arr[i]];
            sum[div]++;
            while(arr[i] % div == 0)arr[i]/=div;
        }
    }
    for(int i = 1;i < 10000001;i++){
        sum[i] += sum[i-1];
    }
    ll m;
    cin >> m;
    ll l, r;
    for(int i = 0;i < m;i++){
        scanf("%lld %lld", &l, &r);
        if(l > 1e7)l = 1e7;
        if(r > 1e7)r = 1e7;
        printf("%lld\n", sum[r] - sum[l-1]);
    }
}
