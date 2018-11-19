#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

string ans;
string tmp;
int n;
bool a, b;

int main(){
  cin >> ans;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> tmp;
    if(tmp == ans){
      cout << "YES";
      return 0;
    }
    if(tmp[0] == ans[1])
      a = 1;
    if(tmp[1] == ans[0])
      b = 1;
  }
  if(a== 1 && b == 1){
    cout << "YES";
    return 0;
  }
  cout << "NO";
  return 0;
}
