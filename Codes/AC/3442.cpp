#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define klar(v) memset(v, 0, sizeof(v))
#define bust ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define gcd(a, b) __gcd(a, b);
#define debug(x) cout << #x << " " << x << endl;
#define endl "\n"

typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long long ll;
const int maxn = 1e5+100;

bool check(ll n, ll k){
    ll vasya = 0, petya = 0;
    ll d = 0;
    while(n > 0){
        d++;
        vasya += min(k, n);
        n -= min(k, n);
        petya += floor(n/10);
        n -= floor(n/10);
    }
    //    cout << k << " " << d << endl;
    if(vasya >= petya)
        return 1;
    return 0;
}

int main(){
    ll n, nn;
    cin >> n;
    int ans = 0;
    ll l = 1, r = floor(n/2)+1;
//    cout << l << " " << n/2 << endl;
    while(l != r){
        ll mid = (l+r)/2;
//        cout << mid << " " << check(n, mid) << endl;
        if(check(n, mid))r = mid;
        else l = mid+1;
    }
    cout << r << endl;
}
