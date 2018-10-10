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

int arr[maxn];

int main(){
    bust
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    pll ans = mp(2e9, 2e9);
    for(int i = 1; i <= n; i++){
        int h = (arr[i]-i+n)/n;
        if(h < ans.st)
            ans = mp(h, i);
    }
    cout << ans.nd;
}
