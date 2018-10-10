#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(auto it = (c).begin(); it != (c).end();++it)
#define pb push_back
#define fs first
#define sc second
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

const int INF = ~(1<<31);
const double pi = acos(-1);
const double EPS = 1e-9;

int main() {
    ll tots;
    cin >> tots;
    ll lo = 1, hi = tots;
    ll ans = 0;
    while(lo <= hi) {
        ll need = (tots+1)/2;
        ll got = 0;
        ll mid = (lo+hi)/2;
        ll left = tots;
        while(left != 0) {
            if(left < mid){
                got += left;
                left = 0;
            } else {
                got += mid;
                left -= mid;
            }
            if(left/10 != 0) {
                left -= left/10;
            }
        }
        if(got >= need){
            ans = mid;
            hi = mid-1;
        } else lo = mid+1;
    }
    cout << ans << endl;
}





