#include <iostream>
using namespace std;
int n, k;


int pb[16];

int main(){
  cin >> n >> k;
  for (int i=0; i<n; ++i){
    int t=0;
    for (int j=0; j<k; ++j){
      int v;
      cin >> v;
      v=!v;
      t=(t<<1)|v;
    }
    for (int j=k; j<4; ++j){
      t=(t<<1)|1;
    }
    ++pb[t];
    //cout << t << endl;
  }
  bool can=pb[15];
  for (int i=0; i<16; ++i){
    for (int j=0; j<16; ++j){
      if (pb[i] && pb[j] && (i|j)==15) can=1;
    }
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
}
