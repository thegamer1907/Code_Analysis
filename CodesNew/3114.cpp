#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long int
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end
#define fr(i, a, b) for(int i = a; i <= b; i++)
#define pii pair<int,int>
#define IO ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define deb cout << "LOL" << endl
const int mod = 1e9 + 7;

const int N = 3e5 + 5;
int a[N], dp[N];
signed main(){
    IO;
    // freopen("inp.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    fr(i, 1, n){
        cin >> a[i];
    }
    int s = 0, j = 1;
    int ans = 0;
    fr(i, 1, n){
        s += (a[i] ^ 1);
        while(s > k)
        {
            s -= (a[j] ^ 1);
            j++;
        }
        dp[i] = i - j + 1;
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    fr(i, 1, n){
        if(dp[i] == ans){
            fr(j, 1, n){
                if(j >= i - ans + 1 && j <= i)
                    cout << 1 << " ";
                else
                    cout << a[j] << " ";
            }
            return 0;
        }
    }
    return 0;
}