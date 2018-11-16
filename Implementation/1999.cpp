#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,n) FOR(i,0,n)
#define RFOR(i,b,a) for(int i = (b) - 1; i>= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a)

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(), a.end()
#define PB push_back
#define MP make_pair

typedef unsigned long long LL;
typedef vector<int> VI;
typedef pair<int,int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL) INF;

const double EPS = 1e-7;
const int MAX = 20 * 1000 + 47;
const int MOD = 1000 * 1000 * 1000 + 7;

int main()
{
  int n;
  cin>>n;
  int resa=0,resb=0,resc=0;
  rep(i,n)
  {
      int a,b,c;
      
      cin>>a>>b>>c;
      resa+=a;
      resb+=b;
      resc+=c;
  }
  if(resa==0 && resb== 0 && resc == 0 )
  {
      cout<<"YES";
  }
  else
  cout<<"NO";
}