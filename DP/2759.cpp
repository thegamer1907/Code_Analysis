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
int n,q;



int main(){
    scanf("%d",&n);
    int ans=0;
    int cc=n/100;
    ans+=cc;
    n-=cc*100;
    cc=n/20;
    ans+=cc;
    n-=cc*20;
    cc=n/10;
    ans+=cc;
    n-=cc*10;
    cc=n/5;
    ans+=cc;
    n-=cc*5;
    ans+=n;
    printf("%d\n",ans);
    return 0;
}
