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
const int maxn = 5e5+100;

ll arr[maxn];

bool test(ll mid, int n){
    ll x = 0;
    for(int i = 0; i < n; i++)
        x += mid-arr[i];
    if(x >= mid)return true;
    return false;
}

int main(){
    bust
    int n;
    cin >> n;
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum = max(sum, arr[i]);
    }
    ll l = sum, r = 1e10;
    while(l != r){
        ll mid = (l+r)/2;
        if(test(mid, n))r = mid;
        else l = mid+1;
    }
    cout << r << endl;
    //keksss
}
