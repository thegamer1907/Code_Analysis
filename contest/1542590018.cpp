#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
const int maxn = 1e6;
const int INF = 0x3f3f3f3f;

int n,m;
int T;
int main()
{
  char x,y;
  char x1,y1;
  bool t = false;
  bool tx = false;
  bool ty = false;
  cin >> x >> y;
  cin >> n;
  while(n--)
  {
      cin >> x1 >> y1;
      if(x1==x && y1 == y) t = true;
      if(x1==y)   tx = true;
      if(y1==x)   ty = true;
  }
  if(t) cout << "YES" << endl;
  else if(tx && ty)  cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
