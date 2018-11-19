#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <queue>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
const int mod = 1000000007;

int n,m,q;

int main()
{
#ifdef local
    freopen("data","r",stdin);
#endif
    double h[6],t1,t2,t3;
    cin>>h[0]>>h[1]>>h[2]>>t1>>t2;
    t1=(int)t1*5%60;
    t2=(int)t2*5%60;
    h[0]=(int)h[0]*5%60;

    if(h[2]>0) h[1]+=0.1;
    if(h[1]>0) h[0]+=0.1;



    for(int i=0;i<3;i++)
    {
        if(h[i]==t2) {puts("NO");return 0;}
    }
    sort(h,h+3);
    bool ok=1;
    if(t1>t2) swap(t1,t2);
    t3=t1+60;
    for(int i=0;i<3;i++) h[i+3]=h[i]+60;
    for(int i=0;i<6;i++)
    {
        if(t1<h[i]&&h[i]<t2) ok=0;
    }
    if(ok) {puts("YES");return 0;}
    ok=1;
    for(int i=0;i<6;i++)
    {
        if(t2<h[i]&&h[i]<t3) ok=0;
    }
    if(ok) puts("YES");
    else puts("NO");
}
