#include <iostream>
using namespace std;
int h, m, s, t1, t2;

bool g(){
  bool a=0;
  int t=t1;
  if (t<t2){
    if (h<t || h==12) a=1;
    if (m<(t*5)) a=1;
    if (s<(t*5)) a=1;
    t=12;
  }
  //cout << t2 << "; " << h << ", " << t << endl;
  if (t2<=h && h<t) a=1;
  if ((5*t2)<=m && m<(t*5)) a=1;
  if ((5*t2)<=s && s<(t*5)) a=1;
  return a;
}



int main(){
  cin >> h >> m >> s >> t1 >> t2;
  bool l=g();
  swap(t1, t2);
  bool r=g();
  //cout << l << ", " << r << endl;
  if (l && r) cout << "NO\n";
  else cout << "YES\n";
}