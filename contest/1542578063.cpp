#include <bits/stdc++.h>
using namespace std;

#define REP(i,s,n) for(int i=s; i<n; ++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

typedef long long ll;
typedef pair<int, int> ii;

int main(){

  int n, k;
  cin >> n >> k;
  vector<int> cnt(1<<k, 0);
  rep(i, n){
    int tmp = 0;
    rep(j, k){
      int in;
      cin >> in;
      tmp *= 2;
      tmp += in;
    }
    cnt[tmp]++;
  }

  if(cnt[0]){
    cout << "YES" << endl;
    return 0;
  }

  rep(i, 1<<k){
    if(!cnt[i]) continue;
    REP(j, i+1, 1<<k){
      if(!cnt[j]) continue;
      if((i & j) == 0){
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}
