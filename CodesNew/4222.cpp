#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
#define EPS 1e-9
typedef long long ll;
typedef vector<int> vi;
#define sz(v)			((int)((v).size()))
#define OO (1<<30)
#define pi 3.14159265
#define  ed  '\n'
#define DEBUG(x) cerr << '>' << #x << ':' << x << '\n';
#define in_range(x, y, r, c) ((x >= 0 && x < r && y >= 0 && y < c))
inline int two(int n) { return 1 << n; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
int dr[] = {-1, 0, 1, 0}, dc[] = {0, 1, 0, -1};
#define fast std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define Max 100111
ll arr[Max];
ll sum[Max];
ll n,k;
pair<ll,ll> ans;
int main() {
    fast
cin>>n>>k;
    for (int i = 1; i <= n; ++i) {
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    for (int i = 1; i <= n; ++i) {
      sum[i]=sum[i-1]+arr[i];
    }
    ans={arr[1],1};
    for (int i = 2; i <= n; ++i) {
        ll lo=1,hi=i-1;
        while(lo<=hi){
            ll mid=(lo+hi)/2;
            ll cost=(arr[i]*(i-mid+1))-(sum[i]-sum[mid-1]);
            if(cost<=k){
               if((i-mid+1)>ans.second||((ans.second==i-mid+1)&&ans.first>arr[i]))ans.second=i-mid+1,ans.first=arr[i];
                hi=mid-1;
            }else lo=mid+1;
        }
    }
    cout<<ans.second<<' '<<ans.first<<ed;
}