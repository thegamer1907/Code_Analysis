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
const int Sz = 1110111;

using namespace std;

inline void Read_rap () {
  ios_base :: sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
}
inline void randomizer3000 () {
  unsigned int seed;
  asm ("rdtsc" : "=A"(seed));
  srand(seed);
}          
long p[4], n[4], cnt[4];

long r;

int get (char c)
{           
  static string s = " BSC";
  for (int i = 1;i <= 3;i ++)  
    if (s[i] == c)
      return i;
}

long cost (long x) {
  long res = 0;    
  for (int i = 1;i <= 3;i ++)
    res += max (0ll, (cnt[i] * x - n[i])) * p[i];
  return res;
} 

int main() 
{
  Read_rap ();
  string s; cin >> s;
  for (char c : s)  
    cnt[get(c)] ++;
  for (int i = 1;i <= 3;i ++) cin >> n[i];
  for (int i = 1;i <= 3;i ++) cin >> p[i];
  cin >> r;
              
  long lo = 0, hi = *max_element(n + 1, n + 4) + r, ans = 0;
  while (lo <= hi)
  {           
    long mid = (lo+hi) >> 1;
    if (cost(mid) <= r)
    {
      ans = mid;
      lo = mid + 1;
    }
    else
      hi = mid - 1;
  }
  cout << ans;


  return 0;
} 










// Coded by Z...