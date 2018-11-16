#include <bits/stdc++.h>

using namespace std;

int xsum, ysum, zsum;

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    int x, y, z;
    cin >> x >> y >> z;
    xsum += x;
    ysum += y;
    zsum += z;
  }
  if(!xsum && !ysum && !zsum) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  cout <<  endl;

}