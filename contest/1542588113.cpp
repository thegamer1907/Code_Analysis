#include<bits/stdc++.h>

#define set(a,b) memset(a,(b),sizeof(a))

using namespace std;

typedef long long ll;

bool flag;
double h,m,s,t1,t2;

int main(){
#ifndef ONLINE_JUDGE
  freopen("B.in","r",stdin);
  freopen("B.out","w",stdout);
#endif
  scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
  m+=s/60,h=(h+m/60)*5,t1*=5,t2*=5;
  if( m>=60 ) m-=60;
  if( h>=60 ) h-=60;
  if( t1>t2 ) swap(t1,t2);
  if( t1<h && t1<m && t1<s && h<t2 && m<t2 && s<t2 ) flag=true;
  if( ( h<t1 || t2<h ) && ( m<t1 || t2<m ) && ( s<t1 || t2<s ) ) flag=true;
  if( flag ) puts("YES");
  else puts("NO");
  return 0;
}
