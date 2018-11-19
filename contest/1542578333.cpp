#include <bits/stdc++.h>
using namespace std;

int main()
{
  double h,m,s,tf,ts;
  cin >> h >> m >> s >> tf >> ts;
  h *= 5;
  tf *= 5;
  ts *= 5;
  pair<double,double> t1 = {tf,tf+60};
  pair<double,double> t2 = {ts,ts+60};
  vector<char> hr;
  vector<char> mr;
  vector<char> sr;
  if(m > 0 || s > 0)
    h += 0.5;
  if(s > 0)
    m += 0.5;
  while(hr.size() != 2)
  {
    if((h <= t1.first && h+1 > t1.first) || (h <= t1.second && h+1 > t1.second))
      hr.push_back('a');
    if((h <= t2.first && h+1 > t2.first) || (h <= t2.second && h+1 > t2.second))
      hr.push_back('b');
    h = h+1;
  }
  
  while(mr.size() != 2)
  {
    if((m <= t1.first && m+1 > t1.first) || (m <= t1.second && m+1 > t1.second))
      mr.push_back('a');
    if((m <= t2.first && m+1 > t2.first) || (m <= t2.second && m+1 > t2.second))
      mr.push_back('b');
    m = m+1;
  }
  
  while(sr.size() != 2)
  {
    if((s <= t1.first && s+1 > t1.first) || (s <= t1.second && s+1 > t1.second))
      sr.push_back('a');
    if((s <= t2.first && s+1 > t2.first) || (s <= t2.second && s+1 > t2.second))
      sr.push_back('b');
    s = s+1;
  }
  
  if((hr[0] == mr[0] && mr[0] == sr[0]) && (hr[1] == mr[1] && mr[1] == sr[1]))
    cout << "YES";
  else
    cout << "NO";
  
  return 0;
}