#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    m+=(s/60);
    h+=(m/60);
    m/=5;
    s/=5;
    if(m>=12) m-=12;
    if(s>=12) s-=12;
    if(h>=12) h-=12;
    if(t1>=12) t1-=12;
    if(t2>=12) t2-=12;
    int flag=1;
    if(t1>t2) swap(t1,t2);
    if(h>t1&&h<t2) flag=0;
    if(m>t1&&m<t2) flag=0;
    if(s>t1&&s<t2) flag=0;
    int flag2=1;
    t1+=12;
    swap(t1,t2);
    if(h>t1&&h<t2) flag2=0;
    if(m>t1&&m<t2) flag2=0;
    if(s>t1&&s<t2) flag2=0;
    h+=12;
    m+=12;
    s+=12;
    if(h>t1&&h<t2) flag2=0;
    if(m>t1&&m<t2) flag2=0;
    if(s>t1&&s<t2) flag2=0;
    if(flag||flag2) printf("YES\n");
    else printf("NO\n");
    return 0;
}
