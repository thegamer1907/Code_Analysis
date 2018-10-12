#include<bitset>
#include<cassert>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<cctype>
#include<algorithm>
#include<map>
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<vector>
#include<deque>
#include<algorithm>
#include<set>
// #include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define fi first
#define se second
#define pii pair<int, int>
#define pli pair<LL, int>
#define pil pair<int, LL>
#define pll pair<LL, LL>
#define vi vector<int>
#define LL long long
#define INF 1e9
#define DINF 1e30
#define LLINF 1e18
#define ULL unsigned long long
#define UI unsigned int
#define eps 1e-9

//#include<cmath>
//#define PI acos(-1.0)

#define all(x) (x).begin(), (x).end()
#define ue(x) (x).erase(unique(all((x))), (x).end())

void err() {
  cout << "shit" << endl;
  exit(1);
}


int main() {
  #ifdef LOCAL
  freopen("in", "r", stdin);
  #endif

  // ios::sync_with_stdio(false);
  // cin.tie(0);
  
  int a[110], n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int Max = *max_element(a, a + n);
  int togo = 0;
  for(int i = 0; i < n; i++) {
    togo += Max - a[i];
  }
  if(m <= togo) {
    printf("%d ", Max);
  }else {
    printf("%d ", Max + (m - togo) / n + ((m - togo) % n > 0 ? 1 : 0));
  }
  printf("%d\n", Max + m);
  return 0;
}
