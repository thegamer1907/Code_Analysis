#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
struct Node{
    ll num;
    int ind;
    ll has;
}a[maxn];
int n;
ll S;
bool cmp(Node &x,Node &y){
    return x.has<y.has;
}
ll can(int t){
    for(int i=1;i<=n;i++)   a[i].has=(ll)t*a[i].ind+a[i].num;
    sort(a+1,a+1+n,cmp);
    ll tot=0;
    for(int i=1;i<=t;i++){
        tot+=a[i].has;
        if(tot>S)   return -1;
    }return tot;
}
int main(){
    scanf("%d%lld",&n,&S);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i].num);
        a[i].ind=i;
    }
    int l=0,r=n,ans1=0;
    ll ans2=0;
    while(l<=r){
        int m=(l+r)>>1;
        ll tmp=can(m);
        if(tmp!=-1)
            l=m+1,ans1=m,ans2=tmp;
        else
            r=m-1;
    }
    printf("%d %lld\n",ans1,ans2);

    return 0;
}
