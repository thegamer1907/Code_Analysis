#include <bits/stdc++.h>

using namespace std;

int n, k;
int cnt[16];

int n_sel;
int viewed[4];

bool ok(){
  if(n_sel == 0) return 0;
  
  for(int i=0; i<k; ++i){
    if(2*viewed[i] > n_sel) return 0;
  }

  return 1;
}

bool dfs(int d){
  if(ok()) return 1;
  
  if(d == 16){
    return ok();
  }
  
  if(cnt[d] > 0){
    ++n_sel;
    for(int i=0; i<k; ++i){
      if((d >> i) & 1) ++viewed[i];
    }
    
    if(dfs(d+1)) return 1;
    
    --n_sel;
    for(int i=0; i<k; ++i){
      if((d >> i) & 1) --viewed[i];
    }
  }
  
  return dfs(d+1);
}

bool solve(){
  return dfs(0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;
    int x;
    int b;
    for(int i=0; i<n; ++i){
      x = 0;
      for(int kk=0; kk<k; ++kk){
        cin >> b;
        x = (x<<1) | b;
      }
      ++cnt[x];
    }
    
    cout << (solve()? "YES" : "NO") << endl;

    return 0;
}
