#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

  int n,t;
  cin >> n >> t;

  vector<int> ai;
  for(int i = 0; i < n-1; i++){
    int currI;
    cin >> currI;
    ai.push_back(currI);
  }

  bool result = false;

  for(int i = 0; i < n;){
    if(t-1 == i){
      result = true;
      break;
    }
    if(t-1 < i) break;
    i += ai[i];
  }

  (result) ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
