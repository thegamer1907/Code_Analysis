#define A455
#ifdef A455
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvd> vvvd;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> viii;
typedef vector<ii> vii;
typedef vector<viii> vviii;
typedef vector<vii> vvii;
typedef  stack<int> si;
typedef queue<int> qi;
typedef map<int,int> mii;
typedef queue<ii> qii;
typedef pair<int , double> id;
typedef vector<id> vid;
typedef vector<vid> vvid;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef unsigned long long ull;
typedef pair<double , double > dd;
typedef vector<dd> vdd;
#define inf 10000000
#define sup 1e-9
#define pi acos(-1)
vi a;
vi memo;
int n;
int sol(int i){

    if(memo[i] != -1) return memo[i];

//    for (int j = i + 1; j < n; ++j) {
//        int sum = 0;
//        for (int k = i; k <= j; ++k) {
//            sum += (!a[k]);
//        }
//        memo[i] = max()
//    }
}

int main(){
    ios::sync_with_stdio(0);
    cin >> n;
    a.assign(n+1, 0);
    memo.assign(n, -1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int ans = -1;
//    for (int i = 0; i < n - 1; ++i) {
//        ans = max(ans, sol(i+1));
//    }
    int sum = 0, s = 0, jj;
    for (int i = 0; i < n - 1; ++i) {
         s = 0;
        for (int l = 0; l < i; ++l) {
            s += a[l];
        }
        for (int j = i + 1; j <= n; ++j) {
            sum = s;
            for (int k = i; k < j; ++k) {
                sum += (!a[k]);
            }
//            if(ans < sum){
//                ans = sum;
//                jj = j;
//            }
            for (int l = j; l < n; ++l) {
                sum += a[l];
            }
            ans = max(ans, sum);

        }
    }
//    for (int l = jj; l < n; ++l) {
//        ans += a[l];
//    }
    if(n == 1) cout << (a[0]? '0' : '1') << endl;
    else cout << ans << endl;

    return 0;
}

#endif