#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define csize(x) (int)((x).size())
#define debug(x) cout << #x << ":" << x << ' ';
#define debugg(x) cout << #x << ":" << x << ' ' << "\n";
#define endl "\n"
#define enld endl

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;

const int MAXN = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

int n, k, ans;
int a[100005];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

   cin >> n >> k;
  

   for (int i = 0 ; i < n; ++i) {
      cin >> a[i];
    }


   int ans = 0, sum = 0;
   for (int i = 0, j = 0 ;i<n && j < n;) {
      if(sum + a[j]  <= k) {
       
        sum += a[j];
        j++;
      }
      else {
        sum -= a[i];
        i++;
      }
       ans = max(ans, j - i );
   }

   cout << ans << endl;

   return 0;
}