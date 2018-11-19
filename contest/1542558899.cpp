#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
//#define MAX_N 100000 + 100
using namespace std;


const int INF = 1e9 + 1;
typedef long long ll;
#define int ll
typedef pair<int,int> pii;
const int maxn = 1e5  + 10;
const int maxk = 20 + 2;
//int dp[maxn][maxk];
//int seq[maxn];
//int vis[maxn];
int cnt[100];
int s[1000];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >>n >>k;
    for (int i = 0;i < n;i++){
        int c = 0;
        for (int j = 0;j < k;j++){
            c *=  2;
            int a;
            cin >> a;
            c +=a;
        }
        cnt[c] += 1;
    }
    if (cnt[0]){
        cout << "YES" << endl;
        return 0;
    }
    if (k < 2){
        cout << "NO" << endl;
        return 0;
    }
    s[0] = 0;
    s[1] = 1;
    for (int i = 2;i < (1 << k);i++)
        s[i] = s[i / 2] + (i % 2);
    for (int i = 0;i < (1 << k);i++){
        if (s[i] != 1) continue;
        if (cnt[i]){
           //     cout << i << endl;
            for (int j = 0;j < (1 << k);j++){
                if (cnt[j] == 0) continue;
          //     cout << j << endl;
                if (j + i == (i | j) && i != j){
                    cout << "YES" << endl;
                    return 0;
                }
            }
      //  cout << i << endl;
            cout << "NO" << endl;
            return 0;
        }
    }
    if (k < 4){
        cout << "NO" << endl;
        return 0;
    }
    int cnt1= 0;
    for (int i = 0;i < (1 << k);i++){
        if (s[i] != 2) continue;
        if (cnt[i]) cnt1++;
        else continue;
        if (cnt[(1 << k) - i - 1]){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
