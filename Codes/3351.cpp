#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N = 1e5 + 5;

ll A[N];

int main(){
    io;
    ll n;
    cin >> n;
    ll minn = 2e18;
    int ans = -1;
    for(int i = 1; i <= n; i++){
        cin >> A[i];
        // i, n + A[i];
        ll curr = i;
        // just bada multiple of A[i]
        if((ll)i > A[i]){
            // trace(i);
            if(curr < minn){
                minn = curr;
                ans = i;
            }
        }else{
            ll x = (A[i] - i);
            ll temp = ceil((double)x / n);
            if(x % n == 0)
                temp += 1;
            curr = temp * n + i;
            if(curr < minn){
                minn = curr;
                ans = i;
            }
            // trace(i, curr);
        }
    }

    cout << ans;
    return 0;
}