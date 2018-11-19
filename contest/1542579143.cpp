#include<bits/stdc++.h>
#define lsc(x) scanf("%lld",&x)
#define sc(x) scanf("%d",&x)
#define lpr(x) printf("%lld ",x)
#define pr(x) printf("%d ",x)
#define n_l printf("\n")
#define VI vector<int>
#define VII vector<long long int>
#define m_p make_pair
#define pb push_back
#define fi first
#define se second
#define mset(x,y) memset(x,y,sizeof(x))
using namespace std;
const int N=(int)1e6+5;
const int mod = 1000000007;
typedef long long ll;
pair<int,int >p[5];
int team[6][N];
int q[N][6];
int ans[N];
VI v[20];
int main(){
    int n,k;sc(n);sc(k);
    for (int i=1;i<=n;i++)
        for (int j=1;j<=k;j++) sc(q[i][j]);
    int mn=mod;
    for (int j=1;j<=k;j++){
        int cnt=0;
        for (int i=1;i<=n;i++) if (!q[i][j]) cnt++;
        p[j].fi=cnt;
        p[j].se=j;
    }
    sort(p+1,p+k+1);
    for (int i=1;i<=k;i++){
        int tm=p[i].se;
        for (int j=1;j<=n;j++) team[i][j]=q[j][tm];
    }
    //for (int i=1;i<=k;i++) {for (int j=1;j<=n;j++) pr(team[i][j]);n_l;}
    for (int i=1;i<=k;i++)
        for (int j=1;j<=n;j++){
            if (i==1 && team[i][j]) team[i][j]=1;
            if (i==2 && team[i][j]) team[i][j]=2;
            if (i==3 && team[i][j]) team[i][j]=4;
            if (i==4 && team[i][j]) team[i][j]=8;
        }
    //for (int i=1;i<=k;i++) {for (int j=1;j<=n;j++) pr(team[i][j]);n_l;}
    for (int i=1;i<=n;i++){
        for (int j=1;j<=k;j++) ans[i]+=team[j][i];
    }
    for (int i=1;i<=n;i++) {
    //    pr(ans[i]);
        v[ans[i]].pb(i);
    }//n_l;
    //for (int i=0;i<=15;i++) pr((int)v[i].size());n_l;
    for (int i=0;i<=15;i++)
        for (int j=0;j<=15;j++)
            if ((i&j)==0)
                if (v[i].size() && v[j].size()){
                    cout<<"YES\n";
                    return 0;
                }
    cout<<"NO\n";
    return 0;
}

