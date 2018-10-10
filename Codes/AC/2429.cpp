
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<long long, long long>
#define V  vector
#define pb  push_back
#define mp  make_pair
#define pq priority_queue
#define FIN(x) freopen(x,"r",stdin)
#define FOUT(x) freopen(x,"w",stdout)
#define ALL(x) x.begin(),x.end()
#define M(a,x) memset(a,x,sizeof(a))
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define scs(x) scanf("%s",x);
#define SZ(x) (int)x.size()
#define print(x) printf("%d",x);
#define nl printf("\n")
#define fr first
#define se second
#define printl(x) printf("%lld",x)
#define F(i,a,n) for(int i=a;i<n;i++)
#define INF 4000000000000000000LL
#define LL long long

const int N = 1e7+5;
int a[N];
int lp[N];
void pre() {
  for(int i = 2 ; i<= 10000000 ; i++) {
    if(!lp[i]) {
      for(int j = i ; j<= 10000000 ; j += i) {
	  lp[j] = i;
      }
    }
  }
}
int ans[N];
int main() {
  pre();
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
    S(a[i]);
    int num = a[i];
    while(num > 1) {
      int temp = lp[num];
      ans[temp]++;
      while(num % temp == 0) {
	num = num/temp;
      }
    }
  }
  for(int i = 1 ; i<= 10000000 ; i++) {
    ans[i] += ans[i-1];
  }
  int q;
  S(q);
  while(q--){
    int x,y;
    S(x) ; S(y);
    x = min(x,10000000);
    y = min(y,10000000);
    printf("%d\n",ans[y]-ans[x-1]);
  }
}