#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;

template<class T>void read(T &x){
    x=0; bool f=0; char c=getchar();
    while(c<'0'||'9'<c){f|=(c=='-'); c=getchar();}
    while('0'<=c&&c<='9'){x=(x<<1)+(x<<3)+(c^48); c=getchar();}
    x=f?-x:x;
}
typedef long long ll;
const int M=100050;
ll n,m,k;
ll a[M],ans;

int main(){
    read(n); read(m); read(k);
    n+=k;
    for(int i=1;i<=m;i++) read(a[i]);
    ll l=1,r=k,t=0,p=1;
    while(t<m&&r<=n){
        if(r<a[p])r+=(a[p]-r)/k*k;
        if(r<a[p])r+=k;
        while(a[p]<=r&&p<=m)++p;
//        printf("%lld %lld %lld %lld\n",l,r,p-1,a[p-1]);
        r+=p-t-1;
        t=p-1;
        ++ans;
    }
    printf("%lld\n",ans);
    return 0;
}