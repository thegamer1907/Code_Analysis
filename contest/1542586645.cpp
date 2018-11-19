#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;
#define LL long long
#define mp make_pair
#define fr first
#define sc second
#define pb push_back
#define lc (x<<1)
#define rc ((x<<1)|1)
const int T=43200;
int cal0(int t){
    if (t==12) t=0;
    return t*(T/12);
}
int cal1(int h,int m,int s){
    if (h==12) h=0;
    return h*3600+m*60+s;
}
int cal2(int h,int m,int s){
    return (m*60+s)*(T/3600);
}
int cal3(int h,int m,int s){
    return s*(T/60);
}
bool check(int x,int y,int *a){
    for (int i=0;i<3;i++) if (x<=a[i]&&a[i]<=y) return 1;
    return 0;
}
int main(){
  //  freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    int a[5],x,y,h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    a[0]=cal1(h,m,s);
    a[1]=cal2(h,m,s);
    a[2]=cal3(h,m,s);
    x=cal0(t1);
    y=cal0(t2);
  //  for (int i=0;i<3;i++) printf("%d ",a[i]);
  //  puts("");
  //  printf("%d %d\n",x,y);
    if (x<y) swap(x,y);
    if (!check(y,x,a)) {puts("YES");return 0;}
    if (!check(x,T-1,a)&&!check(0,y,a)) {puts("YES");return 0;}
    puts("NO");
    return 0;
}
