#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
#define debug puts
using namespace std;
typedef long long ll;

const int N=2e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;
vector<pair<int,int> > t;
int l[N],r[N];

bool cmp(pair<int,int>a,pair<int,int>b){
    return a.F<b.F;
}

int main(void){
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)   scanf("%d",&a[i][j]);
    for(int j=1;j<=m;j++){
        int st=1,ed=1;
        for(int i=1;i<=n-1;i++){
            if(a[i][j]<=a[i+1][j])    ed=i+1;
            else    /*printf("j=%d %d %d\n",j,st,ed),*/t.pb(make_pair(st,ed)),st=ed=i+1;
        }
        t.pb(make_pair(st,ed));
//        printf("j=%d %d %d\n",j,st,ed);
    }
    sort(t.begin(),t.end(),cmp);
    for(int i=0;i<t.size();i++)    l[i]=t[i].F,r[i]=t[i].S/*,cout <<l[i]<<" "<<r[i]<<endl*/;
    int dp[N];
    for(int i=0;i<t.size();i++)    dp[i]=max(dp[i-1],r[i]);
    int k; cin >> k;
    while(k--){
        int ll,rr;
        scanf("%d%d",&ll,&rr);
        auto pos=upper_bound(l,l+t.size(),ll);
        if(pos==l)    cout <<"No"<<endl;
        else{
            int p=prev(pos)-l;
//            cout << "p="<<p<<endl;
            int rrr=dp[p];
            if(rrr>=rr) cout <<"Yes"<<endl;
            else    cout <<"No"<<endl;
        }
    }

    return 0;
}
void bef0re_submit(){
    debug("Make sure the algorithm is right!");
    debug("LONG LONG!!!");
    debug("Check n and m are misuesd???");
    debug("Make sure output format is right/// Yes??YES  (%.20LF)???");
    debug("if all meet,run with special situation!!!");
    debug("I confirm that I have done all above");
}


/*********

*********/
