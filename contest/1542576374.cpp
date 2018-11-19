#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e5 + 10;
const int MOD = 1e9 + 7;
int main() {
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    double deg[5];
    deg[2]=s*1.0/60*360.0;
    deg[1]=m*1.0/60*360.0 + deg[2]*1.0/60.0;
    deg[0]=h*5.0/60*360.0 + deg[1]*1.0/12.0;
    deg[3]=t1*5.0/60*360.0;
    deg[4]=t2*5.0/60*360.0;
    double x=deg[3],y=deg[4];
    sort(deg,deg+5);
    bool f=false;
    for(int i=0;i<=4;i++) {
        if(deg[i]==x) {
            if(deg[(i-1+5)%5]==y||deg[(i+1)%5]==y) f=true;
        }
    }
    puts(f?"YES":"NO");
    return 0;
}