#include <bits/stdc++.h>

using namespace std;

#define topper top //XDDDDDDD

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " <<  x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

set<int> pr;
int n, k;

int main(){
  scanf("%d %d", &n, &k);

  for(int i=0; i<n; i++) {
    int nb = 0;
    for(int j=0; j<k; j++) {
      int u;
      scanf("%d", &u);
      nb += u * (1 << j);
    }
    pr.insert(nb);
  }

  for(int u : pr) {
    for(int v : pr) if (!(u & v)) return printf("YES\n"), 0;
  }

  printf("NO\n");

	return 0;
}

