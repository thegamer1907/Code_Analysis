#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#define ll long long
const int N=2e5+10;
const int inf=0x3f3f3f3f;
const double eps=1e-7;
const int mod=1e9+7;
const double pi=acos(-1.0);
using namespace std;


int main()
{
   double h,m,s,t1,t2;
   cin>>h>>m>>s>>t1>>t2;
   if(t1>t2) swap(t1,t2);
   m+=s/60;
   h+=m/60;
    m=m/5;
    s=s/5;
    int f1=0,f2=0;
    if(t1<h&&h<t2) f1=1;
    if(t1<m&&m<t2) f1=1;
    if(t1<s&&s<t2) f1=1;
    if(!f1) {puts("YES"); return 0; }
    if(h>t2||h<t1) f2=1;
    if(m>t2||m<t1) f2=1;
    if(s>t2||s<t1) f2=1;
    if(!f2) puts("YES"); else puts("NO");
return 0;
}
