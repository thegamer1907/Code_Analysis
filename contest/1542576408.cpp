//Be name Khoda

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  int h,m,s,t1,t2;
  cin>>h>>m>>s>>t1>>t2;
  if(t1>t2)
    swap(t1,t2);
  int l = 0,r = 0;
  if(h < t1 || h>= t2)
    l = 1;
  else
    r = 1;
  t1*=5;
  t2*=5;
  if(m < t1 || m >= t2)
    l = 1;
  else
    r = 1;
  if(s < t1 || s >= t2)
    l = 1;
  else
    r = 1;
  if(l && r)
    cout<<"NO";
  else
    cout<<"YES";
  return 0;
}
