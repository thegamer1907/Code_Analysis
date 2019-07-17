#include <bits/stdc++.h>
  
using namespace std;
  
#define int long long
#define ff first
#define ss second
const int N = 100010;
const int MOD = 998244353;
int n,k,m,l,a,b,c,d;
string s;
 
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n>>m>>k;
    c = k;
    int p[N];
    for (int i = 0;i<m;i++){
        cin >> p[i];
    }
    int t = -1;
    int i = 0;
    int ans = 0;
    while( k <= n){
        t = 0;
        int f=0;
        while(i < m && p[i] <= k){
            i++;
            t++;
            f = 1;
        }
        ans += f;
        k += min(t,n-k);
        if (t == 0){
            if (k+c >n){
                break;
            }
            k+=((p[i] - k+c-1)/c)*c;
        }
    }
    for (int j = i;j<m;j++){
        if (p[j] >= k){
            ans++;
            break;
        }
    }
    cout <<ans;
 }