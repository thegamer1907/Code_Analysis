#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int N, total = 0;
  vector<int> B;
  cin>>N;
  for(int i=0; i<N; i++) {
      int k;
      cin>>k;
      total += k;
      if(k){
        B.push_back(-1);
      }else B.push_back(1);
  }
  int max_current = B[0], max_global = B[0];
  for(int i=1; i<N; i++){
    max_current = max(B[i], max_current + B[i]);
    max_global = max(max_global, max_current);
  }
  cout<<(total + max_global);
  return 0;
}