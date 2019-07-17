#include <bits/stdc++.h>
using namespace std;
#define int long long
#define in ({int x=0;int c=getchar(),n=0;for(;!isdigit(c);c=getchar()) n=(c=='-');for(;isdigit(c);c=getchar()) x=x*10+c-'0';n?-x:x;})
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l,int r){return l+rng()%(r-l+1);}
#define fasty ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define task "a"
#define forinc(a,b,c) for(int a=b,_c=c;a<=_c;++a)
#define fordec(a,b,c) for(int a=b,_c=c;a>=_c;--a)
#define forv(a,b) for(auto&a:b)
#define fi first
#define se second
#define pb push_back
#define ii pair<int,int>
#define mt make_tuple
#define all(a) a.begin(),a.end()
#define reset(f, x) memset(f, x, sizeof(f))
#define bit(x,i) ((x>>(i-1))&1)
#define on(x,i) (x|(1ll<<(i-1)))
#define off(x,i) (x&~(1<<(i-1)))

const int N=100010;

int n,m,k;
int a[N],b[N];
main(){
    //freopen(task".inp","r",stdin);
    //freopen(task".out","w",stdout);
    n=in,m=in,k=in;
    forinc(i,1,m) a[i]=in,b[i]=a[i];
    int cnt=0,wife=0,gap=k;
    while(cnt<m){
        int p=upper_bound(a+1,a+m+1,gap+cnt)-a-1;
        if(p<=cnt){
            gap=((a[cnt+1]-cnt-1)/k+1)*k;
        } else{
            wife++;
            cnt=p;
        }
    }
    cout<<wife;
}