#include <bits/stdc++.h>

using namespace std;

int main() {
  int h,m,s,t1,t2; cin>>h>>m>>s>>t1>>t2;
  h%=12;
  t1 %= 12;
  t2 %= 12;
  int t1_pos = t1 * 3600;
  int t2_pos = t2 * 3600;
  vector<int> pos(3);
  pos[0] = h * 3600 + m * 60 + s;
  pos[1] = m * 60 * 12 + s * 12;
  pos[2] = s * 60 * 12;
  sort(pos.begin(), pos.end());
  if(t2_pos < t1_pos) swap(t1_pos, t2_pos);
  int flag = 0;
  int flag2 = 0;
  for(int i = 0;i < 3;i++) {
    if(pos[i] > t1_pos && pos[i] < t2_pos)
      flag = 1;
    else if(pos[i] < t1_pos || pos[i] > t2_pos)
      flag2 = 1;
  }
  if(!flag || !flag2) {
    cout << "YES" << endl;
  }
  else  {
    cout << "NO" << endl;
  }
}
