#include <vector>

#include <iostream>

using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  vector<int> moves;
  for(int i = 0; i<n; i++){
    int temp;
    cin >> temp;
    moves.push_back(temp);
  }
  t--;
  int count = 0;
  for(int x = 0; x<n; x++){
    int e = moves[x];
    count+=e;
    x+=e-1;
    if(count > t){
      cout << "NO" << endl;
      break;
    }
    else if(count == t){
      cout << "YES" << endl;
      break;
    }
  }
  return 0;
}
