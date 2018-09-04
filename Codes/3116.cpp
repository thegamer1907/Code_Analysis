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
 
using namespace std;
 
const int maxn = (int)3e5 + 100;
const int M = (int)1e6 + 100;
const int mod = (int)1e9 + 7;
const int inf = mod;           

int n, mn = inf, x, pos;                                     
int main () {
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> x;
    if(mn > (max(0, x - i + 1) + n - 1) / n){
      mn = (max(0, x - i + 1) + n - 1) / n;
      pos = i;
    }
  }
  cout << pos;
}
