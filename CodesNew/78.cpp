#include<bits/stdc++.h>
#define fto(i,a,b) for(int i = a;i<=b;i++)
#define fdto(i,a,b) for(int i = a;i>=b;i--)
#define ftv(i,a,b) for(int i = a;i<b;i++)
#define sci(a) scanf("%d",&a)
#define scii(a,b) scanf("%d%d",&a,&b)
#define ll long long
#define ooi (int)(1e9+7)
#define ool (ll)(1e18+7)
#define pii pair<int,int>
#define ff first
#define ss second
#define mp make_pair
#define sz(a) a.size()
#define db double
#define NAME "CF"
#define N (int)(1e5+7)
using namespace std;

int n, m, k, tmp; db ans;
int a[N];

int main() {
    #ifndef ONLINE_JUDGE
        freopen(NAME".inp","r",stdin);
        freopen(NAME".out","w",stdout);
    #endif
    scii(n,m);
    ftv(i,0,n)
        sci(a[i]);
    sort(a,a+n);
    int le = 0;
    ftv(i,0,n) {
        db d1 = (db)(a[i]-le)/2;
        db d2 = (db)(a[i+1]-a[i])/2;
        if (i==0)
            d1 = (db)a[i];
        if (i==n-1)
            d2 = (db)(m-a[i]);
        ans = max(ans,max(d1,d2));
        le = a[i];
    }
    printf("%.10f",ans);
    return 0;
}
