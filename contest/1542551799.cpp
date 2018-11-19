#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;


set<int> seen;

void input(){

  int N, K;

  cin >> N >> K;

  int tmp;
  int cur;
  for(int i = 0 ; i < N ; i++)
  {
    cur = 0;

    for(int j = 0 ; j < K ; j++){
      cin >> tmp;

      if(tmp)
        cur += 1<<j;
    }

    seen.insert(cur);
  }
}

string solve(){

  for(int x1 : seen)
    for(int x2 : seen)
      if((x1&x2) == 0)
        return "YES";

  return "NO";
}

int main() {

  ios::sync_with_stdio(false);
  cin.tie(0);


  input();
  cout << solve();


  return 0;
}


