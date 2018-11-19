#include<bits/stdc++.h>
 
#define ll long long
#define Add_Speed ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define f first
#define sz size()
#define s second
#define pii pair<int, int>
#define all(s) s.begin(), s.end()
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);
#define inf INT_MAX

using namespace std;
 
const int maxn = (int)1e5 + 100;
const int mod = (int)1e9 + 7;
const int maxlog = (int)20;
const int P = mod;

int n, k, a[maxn][6], pw[maxn], used[50];
int bit(int mask, int pos){
  return (mask >> pos) & 1;
}
int main () {
  cin >> n >> k;   
  pw[0] = 1;
  for(int i = 1; i <= 10; i++)
    pw[i] = pw[i - 1] * 2;
  for(int i = 1; i <= n; i++){
    int cur = 0; 
    for(int j = 1; j <= k; j++){
      cin >> a[i][j];
      cur += pw[j - 1] * a[i][j];
    }                   
    used[cur] = 1;
    for(int j = 0; j < (1 << k); j++){
      if(used[j] && __builtin_popcount(j & cur) == 0){
        //cout << j << " " << cur << endl;
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";       
}                                                

