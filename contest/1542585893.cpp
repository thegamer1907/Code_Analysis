#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#include <string>
#include <set>
#include <bitset>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <cassert>
#include <ctime>
#define rep(i,m,n) for(i=m;i<=(int)n;i++)
#define inf 0x3f3f3f3f
#define mod 998244353
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
#define pi acos(-1.0)
#define pii pair<long long,int>
#define sys system("pause")
#define ls (rt<<1)
#define rs (rt<<1|1)
#define all(x) x.begin(),x.end()
const int maxn=1e5+10;
const int N=5e4+10;
using namespace std;
ll gcd(ll p,ll q){return q==0?p:gcd(q,p%q);}
ll qmul(ll p,ll q,ll mo){ll f=0;while(q){if(q&1)f=(f+p)%mo;p=(p+p)%mo;q>>=1;}return f;}
ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}
int n,m,k,t;
int main(){
    int i,j;
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    double x=h*3600+m*60+s;
    x/=3600;
    double hh=x*30;
    x=m*60+s;
    x/=60;
    double mm=x*6;
    double ss=s*6;
    double tt1=t1*30;
    double tt2=t2*30;
    if(tt1>tt2)swap(tt1,tt2);
    int cnt=0;
    if(hh>tt1&&hh<tt2)cnt++;
    if(mm>tt1&&mm<tt2)cnt++;
    if(ss>tt1&&ss<tt2)cnt++;
    if(cnt==0||cnt==3)
    {
        if(hh==tt1||hh==tt2)return 0*puts("NO");
        if(mm==tt1||mm==tt2)return 0*puts("NO");
        if(ss==tt1||ss==tt2)return 0*puts("NO");
        puts("YES");
    }
    else puts("NO");
    return 0;
}
