//abhiy13
#include <bits/stdc++.h>
  using namespace std;

int main(){
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector < int > ar(N);
  for(int &x : ar) cin >> x;
  int M;
  cin >> M;
  vector < int > br(M);
  for(int &x : br) cin >> x;
  sort(ar.begin() , ar.end());
  sort(br.begin() , br.end());
  int ans = 0;
  for(int i = 0 ; i < N ; ++i){
    if(ar[i] == -100000) continue;
    for(int j = 0 ; j < M ; ++j){
      if(br[j] == -100000) continue;
      if(abs(ar[i] - br[j]) <= 1){
        ar[i] = -100000;
        br[j] = -100000;
        ans++;
        break;
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
 
