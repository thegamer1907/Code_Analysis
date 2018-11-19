#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
//wtf
  if(h == 12) h = 0;
  if(t1 == 12) t1 = 0;
  if(t2 == 12) t2 = 0;
  if(t1 > t2) swap(t1, t2);
  int cnt = 0;
  if(t1 <= h && h < t2) cnt++;
  if(t1 <= m/5 && m/5 < t2) cnt++;
  if(t1 <= s/5 && s/5 < t2) cnt++;
  cout << (cnt == 0 || 3 == cnt ? "YES" : "NO");
}