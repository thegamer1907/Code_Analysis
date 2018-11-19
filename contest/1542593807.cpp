#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define mp make_pair
#define fs first
#define sec second
#define N 100005
#define M 1000005
#define inf 1000000007

using namespace std;
 
typedef pair<int,int> ii;
typedef pair<ll,ll> lii;
typedef vector<int> vi;
typedef vector<ii> vii;
const double pi = acos(-1);

string s , x;
int n;
bool a , b;
int main() { 
      #ifndef ONLINE_JUDGE
            freopen("in.in", "r", stdin);
            freopen("out.in", "w", stdout);
      #endif

      cin >> s;
      cin >> n;
      while(n--) {
            cin >> x;
            if(x[0] == s[1])
                  a = 1;
            if(x[1] == s[0])
                  b = 1;
            if(x == s)
                  return puts("YES") , 0;
      }
      if(a && b)
            puts("YES");
      else
            puts("NO");


      return 0;
}