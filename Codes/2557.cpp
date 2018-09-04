# include <bits/stdc++.h>
/// my holy template
# define F first    
# define S second
# define mp make_pair
# define pii pair<int,int>         
/// eveything goes according to plan
# define long long long  
# define pb push_back
# define sz(a) (int)(a.size())

# define y1    tipa_y1
# define left  tipa_left
# define right tipa_right     

const int Mod = (int)1e9 + 7;
const int MX = 1073741822;
const long MXLL = 9223372036854775807;
const int Sz = 1e7 + 1;

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
int cnt[Sz], f[Sz];

vector <int> pr;
vector <long> pref;

int lp[Sz];

inline void Sieve (const int N) {
  pr.pb (0);
  pref.pb (0);
  for (int i = 2;i <= N;i ++)
  {
    if (!lp[i]) {
      lp[i] = i;
      pr.pb (i);   
      for (int j = i;j <= N;j += i)
        f[i] += cnt[j];
      pref.pb (pref.back() + f[i]);
    }
    for (int j = 1;j < sz(pr) && pr[j] <= lp[i] && i * pr[j] <= N;j ++)
      lp[pr[j] * i] = pr[j];
  } 
}             
                              
int main() 
{
  int n;  scanf ("%d", &n);
  for (int i = 1;i <= n;i ++) {
    int x;  scanf ("%d", &x);
    cnt[x] ++;
  }                     

  Sieve(Sz-1);
  int m;  scanf ("%d", &m);

  while (m --)
  {                        
    int l, r; scanf ("%d %d", &l, &r);
    r = min (r, pr.back());
    l = min (l, pr.back() + 1);

    r = --upper_bound (pr.begin(), pr.end(), r) - pr.begin();
    l = --lower_bound (pr.begin(), pr.end(), l) - pr.begin();
    assert (l <= r);
    printf ("%I64d\n", pref[r] - pref[l]);
  }
  cerr << "TIME: " << fixed << setprecision (10) <<  clock() * 1.0 / CLOCKS_PER_SEC;

  return 0;
} 










// Coded by Z...