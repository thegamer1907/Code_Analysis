/*
*  Author: windystreet
*  Date  : 2018-09-27 13:17:27
*  Motto : Think twice, code once.
*/
#include<bits/stdc++.h>

using namespace std;

#define X first
#define Y second
#define eps  1e-5
#define gcd __gcd
#define pb push_back
#define PI acos(-1.0)
#define lowbit(x) (x)&(-x)
#define bug printf("!!!!!\n");
#define mem(x,y) memset(x,y,sizeof(x))

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef unsigned long long uLL;

const int maxn = 1e5+7;
const int INF  = 1<<30;
const int mod  = 1e9+7;

int s[maxn];

void solve(){
    int n,m,sum = 0,mx = -1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>s[i];
    	sum += s[i];
    	mx = max(mx,s[i]);
    }
    int ans = (sum+m)/n;
    if(((sum+m)%n))++ans;
    printf("%d %d\n",max(mx,ans),mx+m);
    return;
}

int main()
{
//    freopen("F:\\in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ios::sync_with_stdio(false);
    int t = 1;
    //scanf("%d",&t);
    while(t--){
    //    printf("Case %d: ",cas++);
        solve();
    }
    return 0;
}