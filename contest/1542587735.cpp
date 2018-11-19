#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_set>
using namespace std;
typedef long long ll;
const int maxn = 105;

double eps=1e-8;

int main() {
#ifdef suiyuan2009
  freopen("in.cpp","r",stdin);
#endif
  int h,m,s,t1,t2;
  cin>>h>>m>>s>>t1>>t2;
  h=h%12;
  t1=t1%12;
  t2=t2%12;
  double ah=360.0/12*h+360.0/12/60*m+360.0/12/60/60*s;
  double am=360.0/60*m+360.0/60/60*s;
  double as=360.0/60*s;
  vector<double>vec{ah,am,as};
  sort(vec.begin(),vec.end());
  double at1=360.0/12*t1;
  double at2=360.0/12*t2;
  bool yes=0;
  for(int i=0;i<2;i++)
    if(vec[i]<at1+eps&&at1<vec[i+1]+eps&&vec[i]<at2+eps&&at2<vec[i+1]+eps)yes=1;
  if((at1+eps>vec[2]||at1<vec[0]+eps)&&(at2+eps>vec[2]||at2<vec[0]+eps))yes=1;
  if(yes)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}
