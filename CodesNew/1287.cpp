#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i=0;i<n;i++)
#define RREP(i, n) for(int i=n;i>=0;i--)
#define TCASES int _t; cin>>_t; while(_t-- > 0)
#define PI 3.141592653589793238462643383279
const int MOD = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL_TEST
    freopen("input.txt","r",stdin);
    #endif
    int n; cin >> n;
    int ans = INT_MAX, res = -1;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        a -= i;
        int turn = a <= 0 ? 0 : ((a-1) / n + 1) * n;
        if(ans > i + max(0, turn)){
            ans = i + max(0, turn);
            res = i;
        }
    }
    cout << res + 1 << '\n';
    return 0;
}
