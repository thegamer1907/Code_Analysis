#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<complex>
#include<queue>
#include<stack>
#include<cmath>
#include<set>
#include<vector>
using namespace std;
double h[5];
int main(){
  double t1,t2;
  scanf("%lf%lf%lf%lf%lf",&h[1],&h[2],&h[3],&t1,&t2);
  h[1]*=5;if(h[1]==60) h[1]=0;
  h[1]+=h[2]/60+h[3]/3600;
  h[2]+=h[3]/60;
  t1*=5;if(t1==60) t1=0;
  t2*=5;if(t2==60) t2=0;
  sort(h+1,h+4);
  if(t1>h[1] && t1<h[2] && t2>h[1] && t2<h[2]) printf("YES"),exit(0);
  if(t1>h[2] && t1<h[3] && t2>h[2] && t2<h[3]) printf("YES"),exit(0);
  if((t1>h[3] || t1<h[1]) && (t2>h[3] || t2<h[1])) printf("YES"),exit(0);
  printf("NO");
  return 0;
}
