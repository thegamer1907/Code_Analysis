//This code uses a C++ Template written by Marcus Handley
//Adapated from Compeitive Programming 3 - A new lower bound
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1000000000
#define MOD 1000000007
#define LOG_LEVEL 1
#define PB push_back
#define P push
#define F first
#define S second
#define ILLP if(LOG_LEVEL)printf
#define SZ(x) ((int)((x).size()))
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define ALL(x) x.begin(),x.end()
#define SMAX(x, y) ((x) = max((x), (y)))
#define SMIN(x, y) ((x) = min((x), (y)))
#define LOOP(x,n) for(int x = 0; x < n; ++x)
#define PI acos(-1.0)


typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

typedef char byte;

int num[16];
int main(){
  int n,k; scanf("%d %d",&n,&k);
  LOOP(i, n){
    int mask = 0;
    LOOP(j, k){
      int x; scanf("%d",&x);
      mask = mask*2+x;
    }
    num[mask]++;
  }
  //SUFFICENT FOR K = 1
  if (num[0]){
    printf("YES\n");
    return 0;
  }
  //SUFFICENT FOR 1<=K<=2
  for (int i = 0; i<(1<<k); i++){
    if (num[i] && num[(1<<k)-1-i]){
      printf("YES\n");
      return 0;
    }
  }

  //SUFFICENT FOR 1<=K<=4
  for (int i = 0; i<(1<<k); i++) if (num[i]) for (int j = 0; j<(1<<k); j++) if (num[j]){
    if ((i&j)==0){
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
