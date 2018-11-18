// 438 B

#include <bits/stdc++.h>
using namespace std;
#define ll long long


  float h_f, m_f, s_f;

bool is_possible(int t1, int t2)
{
  if(t2 < t1) t2 += 12;
  if(( t1 < h_f && h_f < t2) ||( t1 < h_f+12.0 && h_f+12.0 < t2)  )
  {
    return false;
  }
  if(( t1 < m_f && m_f < t2) ||( t1 < m_f+12.0 && m_f+12.0 < t2)  )
  {
    return false;
  }
  if(( t1 < s_f && s_f < t2) ||( t1 < s_f+12.0 && s_f+12.0 < t2)  )
  {
    return false;
  }
  return true;

} 

int main()
{
  int h, m, s, t1, t2;

  cin >> h>>m>>s>>t1>>t2;
  if(m > 0 || s >0) 
  {
    h_f = 1.0 * h + 0.5;
  }
  else
  {
    h_f = 1.0*h;
  }
  m_f = 1.0*m / 5.0;
  s_f = 1.0*s/ 5.0;
  if((int)(m_f) * 1.0==m_f  && s > 0 ) m_f+=0.5;

  //cout <<h_f<<" "<<m_f<<" "<<s_f<<"\n ";
  //cout <<is_possible(t1, t2) << is_possible(t2, t1);


  if(is_possible(t1, t2) || is_possible(t2, t1) ) 
  {
    cout <<"YES";
  }
  else
    cout << "NO";

  return 0;
} 
