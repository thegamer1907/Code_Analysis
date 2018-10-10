#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef long long ll;
typedef pair<ll,ll> pll;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
const int maxn=1e5+15;
const int maxm=100005;
const int mod=1000000007;
const int inf=0x3f3f3f3f;
int a[maxn];
int n,q;
int b[maxn];
bool check(int val){
    int cntpos=val%n;
    for(int i=0;i<n;i++)b[i]=a[i]-val;
    int cnt=-1;
    for(int i=cntpos;i>=0;i--){
        cnt++;
        if(b[i]+cnt<=0)return 1;
    }
    for(int i=n-1;i>cntpos;i--){
        cnt++;
        if(b[i]+cnt<=0)return 1;
    }
    return 0;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int lef=0,rig=1e9,ans=-1;
    while(lef<=rig){
        int mid=(lef+rig)>>1;
        if(check(mid)){ans=mid;rig=mid-1;}
        else lef=mid+1;
    }
    printf("%d\n",ans%n+1);
    return 0;
}
