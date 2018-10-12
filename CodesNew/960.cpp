#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
using namespace std;
typedef long long LL;
#define MOD 20090308


map<string,int> poland,enemy;
int main(){
  // freopen("test.in","r",stdin);
  int n,m;
  cin >> n >> m;
  for (int i=1;i<=n;i++){
    string s;
    cin >> s;
    poland[s] = 1;
  }
  for (int i=1;i<=m;i++){
    string s;
    cin >> s;
    enemy[s] = 1;
  }

  int repeat = 0;
  for (auto it=poland.begin();it!=poland.end();it++){
    string nows = (*it).first;
    if (enemy[nows] == 1){
      repeat ++;
    }
  }
  if (repeat % 2 == 0){
    if (n > m){
      cout << "YES";
    }
    else
      cout << "NO";
  }
  else {
    if (n >= m){
      cout << "YES";
    }
    else
      cout << "NO";
  }
  return 0;
}
