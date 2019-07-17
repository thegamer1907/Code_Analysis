#include<bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> P;

#define VNAME(value) (#value)
#define bug printf("*********\n");
#define debug(x) cout<<"["<<VNAME(x)<<" = "<<x<<"]"<<endl;
#define mid (l+r)/2
#define chl 2*k+1
#define chr 2*k+2
#define lson l,mid,chl
#define rson mid+1,r,chr
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a));

const long long mod=1e9+7;
const int maxn=1e6+5;
const int INF=0x7fffffff;
const LL inf=0x3f3f3f3f;
const double eps=1e-8;
void f() {
#ifndef ONLINE_JUDGE
    freopen("dat.in", "r", stdin);
#endif // ONLIN_JUDGE
}

int bit[maxn+1],pos;
int sum(int i) {
    int s=0;
    while(i>0) {
        s +=bit[i];
        i-=i&-i;
    }
    return s;
}
void add(int i,int x) {
    while(i<=pos) {
        bit[i]+=x;
        i+=i&-i;
    }
}


int n;
struct node {
    int x,y;
} p[maxn];

bool cmp(node &o1,node &o2) {
    if(o1.y==o2.y)return o1.x<o2.x;
    return o1.y>o2.y;
}

LL ans=0;
unordered_map<int,int>mp;
int a[maxn];
int main() {
    f();
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d%d",&p[i].x,&p[i].y);
        a[i]=(p[i].x);
    }
    pos=1;
    sort(a,a+n);
    for(int i=0; i<n; i++) {
        if(i==0) {
            mp[a[0]]=pos++;
        } else if(a[i]!=a[i-1]) {
            mp[a[i]]=pos++;
        }
    }
    for(int i=0; i<n; i++) {
        p[i].x=mp[p[i].x];
    }
    sort(p,p+n,cmp);

    int len=0;
    a[len++]=p[0].x;
    add(p[0].x,1);
    int mx=pos;
    for(int i=1; i<n; i++) {
        if(p[i].y==p[i-1].y) {
            a[len++]=p[i].x;
            if(sum(p[i].x)-sum(p[i].x-1)==0)add(p[i].x,1);
        } else {
            int la=0;
//            sort(a,a+len);
            for(int j=0; j<len; j++) {
                int i=a[j];
                ans+=1LL*(sum(i)-sum(la))*(sum(mx)-sum(i-1));
                la=i;
            }
            len=0;
            a[len++]=(p[i].x);
            if(sum(p[i].x)-sum(p[i].x-1)==0)add(p[i].x,1);
        }
    }
    int la=0;
//    sort(a,a+len);
    for(int j=0; j<len; j++) {
        int i=a[j];
        ans+=1LL*(sum(i)-sum(la))*(sum(mx)-sum(i-1));
        la=i;
    }
    printf("%lld\n",ans);
    return 0;
}
/*
286
*/