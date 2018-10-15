#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define sz(a) (int)a.size()
#define ll long long
#define fi first
#define se second
#define Fill(a) memset(a,0,sizeof(a))
const int N = 1e5+5;
const int p = 1e9+7;

int a[105];
int main()
{
    int n;scanf("%d",&n);
    int m;scanf("%d",&m);
    int ma=0;
    for(int i=1;i<=n;i++){
        int x;scanf("%d",&x);
        ma=max(ma,x);
        a[i]=x;
    }
    int tmp=0;
    for(int i=1;i<=n;i++)tmp+=ma-a[i];
    int ans;
    if(tmp>=m)ans=ma;
    else{
        ans=ma+(m-tmp)/n+!!((m-tmp)%n);
    }
    printf("%d %d\n",ans,ma+m);
    return 0;
}