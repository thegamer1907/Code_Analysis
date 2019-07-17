#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair < int , int > pii;
typedef vector < int > vi;
#define debug(x) cout << #x << " = " << x << '\n';
#define ff first
#define ss second
#define pb push_back
#define INF 2000000000
#define LLINF 4000000000000000000
#define MOD 1000000007
#define sz(x) (int((x).size()))
#define LOG2(X) ((unsigned) (8*sizeof(int) - __builtin_clz((X)) - 1))
#define MAX 100010

ll n , m , k;
set < int > s;

int main()
{
//   freopen("in.txt" , "r" , stdin);
//   freopen("good.txt" , "w" , stdout);
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   cin >> n >> m >> k;

   ll x;
   for(int i = 0 ; i < m ; ++i){
      cin >> x;
      s.insert(x);
   }

   ll curr = 0 , ans = 0;
   while(!s.empty()){
      x = s.size();
      ll f = *s.begin();
      f-= curr;
      ll calc = ceil((double)f/(double)k)*k;
      s.erase(s.begin() , s.upper_bound(calc + curr));
      curr += x - s.size();
      ans++;
   }

   cout << ans << '\n';

   return 0;
}