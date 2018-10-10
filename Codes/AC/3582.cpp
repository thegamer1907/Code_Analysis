#include<iostream>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<map>
#include<string>
#include<stack>
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define fio ios::sync_with_stdio(false);cin.tie(0)
#define pqueue priority_queue
#define si(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sf(a) scanf("%f",&a)
#define slf(a) scanf("%lf",&a)
const double pi=4.0*atan(1.0);
const double e=exp(1.0);
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<LL,LL> P;
LL a[210000],b[210000],c[210000],d[210000];
LL ns[210000],nx[210000];
int main(){
    fio;
    LL n,m,k,x,s;
    cin>>n>>m>>k>>x>>s;
    for(LL i=0;i<m;i++){
        cin>>a[i];
    }
    for(LL i=0;i<m;i++){
        cin>>b[i];
    }
    for(LL i=0;i<k;i++){
        cin>>c[i];
    }
    for(LL i=0;i<k;i++){
        cin>>d[i];
    }
    LL cnt=1;
    nx[0]=x;
    ns[0]=s;
    LL mini=n*x;
    for(LL i=0;i<m;i++){
        if(s>=b[i]){
            ns[cnt]=s-b[i];
            nx[cnt]=a[i];
            mini=min(a[i]*n,mini);
            cnt++;
        }
    }
    for(LL i=0;i<cnt;i++){
        LL l=0;
        LL r=k;
        LL ans=0;
        while(l<r){
            LL mid=((r-l)>>1)+l;
            if(d[mid]>ns[i]){
                r=mid;
            }
            else{
                ans=mid;
                l=mid+1;
            }
        }
        if(d[ans]<=ns[i]){
            if(mini>nx[i]*(n-c[ans])){
                mini=nx[i]*(n-c[ans]);
            }
        }
    }
    cout<<mini<<endl;
}
