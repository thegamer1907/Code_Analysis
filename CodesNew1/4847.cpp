#include <bits/stdc++.h>
using namespace std;
#define N 200100
int inp[N];
string t, p;

bool can_do(int mid){
  for(int i=0,j=0;i<t.size();i++){
    if(inp[i] < mid) continue;
    if(p[j] == t[i] && ++j == p.size()) return true;
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> t >> p;
  int n = t.size();
  for(int i=0;i<n;i++){
    int a; cin >> a;
    inp[a-1] = i;
  }
  int lo = 0, hi = n;
  while(lo <= hi){
    int mid = lo + (hi - lo) / 2;
    if(can_do(mid)) lo = mid + 1;
    else hi = mid - 1;
  }
  lo--;
  assert(lo >= 0);
  cout << lo << '\n';

  return 0;
}