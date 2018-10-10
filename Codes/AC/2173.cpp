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
const int maxn = 2e5+100;

ll pref[maxn];
ll arr[maxn];

int main(){
    bust
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        pref[i] = arr[i]+pref[i-1];
    }
    ll ans = 0;
    ll sum = 0;
    for(int i = n; i >= 2; i--){
        sum += arr[i];
//        cout << "szukam w " << 1 << " " << i-1 << endl;
        ll psum = *lower_bound(pref+1, pref+i-1, sum);
//        cout << sum << " " << psum << endl;.
        if(sum == psum)ans = max(ans, psum);
    }
    cout << ans;
}
