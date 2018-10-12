// IN THE NAME OF ALLAH
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstring>

#define F first
#define S second
#define mp make_pair
#define pii pair<int , int>

#define Left(x) (2*(x))
#define Right(x) ((2*(x))+1)

#define int ll

using namespace std;
typedef long long ll;

const int N = 2e6 + 5 , L = 26 , MOD = 1e9 + 7 , P = 727 , SQ = sqrt(N) , M = 2e5 + 10 , DLT = 10987;
const ll inf = 3e18 + 10;

int ps[N] , lst[N] , k , ans = 0;
string s;

int32_t main(){
      for(int i = 0 ; i < N ; i++) lst[i] = -1;
      cin>>k>>s;
      if(s[0] == '1')
            ps[0] = 1;
      lst[ps[0]] = 0;
      for(int i = 1 ; i < (int)s.size() ; i++){
            if(s[i] == '1')
                  ps[i] = ps[i-1] + 1;
            else
                  ps[i] = ps[i-1];
            lst[ps[i]] = i;
      }
      for(int i = 0 ; i < (int)s.size() ; i++){
            int pr = 0 , need = 0;
            if(i > 0)
                  pr = ps[i-1];
            need = k + pr;
            int l , r;
            if(need == 0){
                  if(lst[need] == -1) continue;
                  r = lst[0];
                  if(r >= i)
                        ans += r - i + 1;
                  continue;
            }
            r = lst[need] , l = max(i , lst[need-1] + 1);
            if(lst[need] != -1 && r >= i){
                  ans += (r - l + 1);
            }
      }
      return cout<<ans , 0;
}
