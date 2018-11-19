#pragma comment(linker,"/STACK:102400000,102400000")
#include <cstring>
#include <cstdio>
#include <cctype>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <bitset>
#include <ctime>
#include <cmath>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(i,l,r) for(int i=l,ed=r;i<ed;++i)
#define per(i,l,r) for(int i=r-1,ed=l;i>=ed;--i)
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define se second
#define sf(x) scanf("%d",&x)
#define db(x) cout<<#x<<"="<<(x)<<" "

typedef long long ll;
typedef double dd;
typedef vector<int> VI;
typedef pair<int,int> PII;
const ll LINF=0x3f3f3f3f3f3f3f3fLL;
const int INF=0x3f3f3f3f;
const dd EPS=1e-6;
const dd PI=acos(-1.0);

const ll mod=1e9+7;
const int N=201000;
int h,m,s;
int t1,t2;
int ck(double l,double r,double x){
    if(l>r)swap(l,r);
    return (x>l&&x<r);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    scanf("%d%d%d",&h,&m,&s);
    scanf("%d%d",&t1,&t2);
    double hh=(h+m/60.0+s/3600.0)/6.0*PI;
    double mh=(m+s/60.0)/30.0*PI;
    double sh=s/30.0*PI;
    double h1=t1/6.0*PI;
    double h2=t2/6.0*PI;
    int tot=ck(h1,h2,hh)+ck(h1,h2,mh)+ck(h1,h2,sh);
    if(tot==0||tot==3){
        puts("YES");
    }else puts("NO");
    return 0;
}

