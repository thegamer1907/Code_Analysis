#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
double h,m,s,t1,t2;
double a[5];
#define eps (1e-8)
int main(){
  scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
  if (m>0 || s>0) h+=0.5;
  if (s>0 )m+=0.5;
  m=m/60*12;
  s=s/60*12;
  a[1]=h;
  a[2]=m;
  a[3]=s;
  sort(a+1,a+4);
  a[4]=a[1]+12;
  //for (int i=1;i<=4;i++)printf("%lf\n",a[i]);
  bool yes=false;
  double a1=a[1];
  double a2=a[2];
  double a3=a[3];
  //a1->a2
  if (a1+1e-8 < t1 && a1+1e-8<t2 && a2-eps>t1 && a2-eps>t2) yes=true;
  //a2->a3
  if (a2+1e-8 < t1 && a2+1e-8<t2 && a3-eps>t1 && a3-eps>t2) yes=true;
  if (t1<a1-eps || t1>a3+eps)
    if (t2<a1-eps || t2>a3+eps)
    yes=true;
  if (yes)printf("YES\n");else printf("NO\n");
  return 0;
}
