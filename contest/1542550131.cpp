# include <bits/stdc++.h>
/// my holy template
# define F first    
# define S second
# define mp make_pair
# define pii pair<int,int>         
/// eveything goes according to my plan
# define ll long long  
# define pb push_back
# define sz(a) (int)(a.size())
# define vec vector
/// countdown BEGAN. 10 , 9 , 8 ...
# define y1    Y_U_NO_y1
# define left  Y_U_NO_left
# define right Y_U_NO_right
/// dzyn dzyn dzyn   
const int Mod = (int)1e9 + 7;
const int MX = 1073741822;
const ll MXLL = 4e18;
const int Sz = 1110111;

using namespace std;

inline void Read_rap () {
  ios_base :: sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
}
inline void randomizer3000 () {
  unsigned int seed;
  asm("rdtsc" : "=A"(seed));
  srand(seed);
}
int n, k;

int cnt[Sz];

const int N = 1e5 + 1;
const int K = 20 + 1;
ll dp[K][N];

int a[Sz];

int L = 1, R = 0;
ll  cost;
          
inline void add (int x) {
  cost += cnt[a[x]] ++;
}
inline void del (int x) {
  cost -= --cnt[a[x]];
}
inline void move (int tl, int tr) {
  while (R < tr)  add (++R);
  while (L < tl)  del (L++);
  while (R > tr)  del (R--);
  while (L > tl)  add (--L);
}
void solve (int k, int l, int r, int kl, int kr) {
  if (l > r)  return;

  int mid = (l+r) >> 1;
  int opt = 0;
  for (int i = min (mid, kr); i >= kl; i--) {
    move (i, mid);
    if (dp[k][mid] > cost + dp[k - 1][i - 1]) {   
      dp[k][mid] = cost + dp[k - 1][i - 1];
      opt = i;
    }
  }       
  solve (k, l, mid - 1, kl, opt);
  solve (k, mid + 1, r, opt, kr);
}
                              
int main() 
{
  Read_rap ();
  cin >> n >> k;  
  for (int i = 1; i <= n; i++)  cin >> a[i];
                              
  for (int i = 0; i <= k; i++)
    for (int j = 0; j <= n; j++)
      dp[i][j] = MXLL;
  dp[0][0] = 0;
  for (int i = 1; i <= k; i++) {
    solve (i, i, n, 1, n);
  }  
  cout << dp[k][n];

  return 0;
} 










// Coded by Z...