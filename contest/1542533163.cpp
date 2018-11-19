#include<cstdio>
#include<cmath>
#include<algorithm>
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main() {
//    freopen("in.txt","r",stdin);
    double h,m,s,a,b;
    cin>>h>>m>>s>>a>>b;
    if(h==12) h = 0;
    double tim[3];
    tim[0] = h*30.0+m*0.5+s/120;
    tim[1] = m*6+s/10;
    tim[2] = s*6;
    sort(tim,tim+3);
    a = a*30,b = b*30;
    if(a<tim[1]&&a>tim[0]&&b<tim[1]&&b>tim[0])
        puts("yes");
    else if(a<tim[2]&&a>tim[1]&&b<tim[2]&&b>tim[1])
        puts("yes");
    else if((a>tim[2]||a<tim[0])&&(b>tim[2]||b<tim[0]))
        puts("yes");
    else puts("no");
    return 0;
}












