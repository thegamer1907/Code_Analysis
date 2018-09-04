#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238462643383279
const long double EPS = 1e-9;
const long long MOD = 1e9+7;
#define N 200100
int inp[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(20);
    #ifdef LOCAL_TEST
    freopen("input.txt","r",stdin);
    #endif
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> inp[i];
    long long rsum = 0;
    long long ans = 0;
    long long lsum = 0;
    for(int i=0,j=n-1;i<=j;){
        if(lsum < rsum) lsum += inp[i++];
        else rsum += inp[j--];

        if(lsum == rsum) ans = max(ans, lsum);
    }
    cout << ans << '\n';
    return 0;
}
