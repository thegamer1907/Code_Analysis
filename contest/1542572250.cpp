#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
const int N= 1e6 + 5;
vector<pair<int, int> > v;
int main(){
  fast;
  ll hr,  min, sec, t1, t2;
  cin >> hr >> min >> sec >> t1 >> t2;
  hr = ((hr * 5) % 60) + 1;
  t1 = t1 * 5 % 60;
  t2 = t2 * 5 % 60;
  if(min % 5 == 0)
    min++;
  if(sec % 5 == 0)
    sec++;
  ll a[] = {hr, min, sec, t1, t2};
  sort(a, a + 5);
  for (int i = 0; i < 5; ++i)
  {
    if((a[i] == t1 && a[(i + 1) % 5] == t2) || (a[i] == t2 && a[(i + 1) % 5] == t1))
      return cout << "YES", 0;
  }
  cout << "NO", 0;
  return 0;
} 