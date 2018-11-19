//#include <map>
//#include <set>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <cmath>
//#include <bitset>
//#include <vector>
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <algorithm>
////#include<bits/stdc++.h>
//using  namespace std;
//typedef long long ll;
//#define pd(x) printf("%d\n",x)
//#define cls(a,x) memset(a,x,sizeof(a))
//const double eps=1e-8;
//const double PI=acos(-1.0);
//const int INF=1e9+10;
//const int MOD=1e9+7;
//const int N=1e6+10;
//int vis[30],v[5];
////char s[N];
//int main()
//{
//
//    return 0;
//}
//





#include <bits/stdc++.h>
using namespace std;
int hh,m,s,sss,t2;
double H,M,S;
bool judge(double x,double y)
{
    if(x<H&&H<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
bool jj(double x,double y)
{
    if(H<x) H+=360;
    if(M<x) M+=360;
    if(S<x) S+=360;
    if(x<H&&H<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
int main()
{

    scanf("%d%d%d%d%d",&hh,&m,&s,&sss,&t2);
    hh%=12,H=360./12*hh+30./60*m+30./60/60*s;//
    M=360./60*m+360./60/60*s,S=360./60*s;
    sss%=12;
    t2%=12;
    sss*=30;
    t2*=30;
    if(sss>t2) swap(sss,t2);
    if(judge(sss,t2)||jj(t2,sss+360)) printf("YES\n");
    else printf("NO\n");
}
