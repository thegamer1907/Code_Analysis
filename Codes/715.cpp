#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;++i)
#define fd(i,a,b) for(int i=a;i>=b;--i)
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define fore(i,a)  for(__typeof(a.begin()) i=a.begin();i!=a.end();++i)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define cntbit(X)   __builtin_popcount(X)
#define TASK "919B"
using   namespace   std;
LL  F[16][145],G[16][145];
int K,p,tmp;
vector <int> ans;
///--------------------------
void    solve(){
    cin>>K;
    fo(i,0,9) F[1][i]=G[1][i]=1;
    fo(i,2,15) fo(k,0,9*i) fo(j,0,min(9,k)){
        F[i][k]+=F[i-1][k-j];
        if (j>0) G[i][k]+=F[i-1][k-j];
    }
    p=1;
    while (G[p][10]<K) K-=G[p++][10];
    tmp=10;
    fo(i,1,9) if (F[p-1][tmp-i]<K) K-=F[p-1][tmp-i];
    else {
        ans.push_back(i);
        tmp-=i;
        break;
    }
    while (p>1){
        p--;
        fo(i,0,tmp) if (F[p-1][tmp-i]<K) K-=F[p-1][tmp-i];
        else {
            ans.push_back(i);
            tmp-=i;
            break;
        }
    }
    ans.push_back(tmp);
    fore(it,ans) cout<<(*it);
}
///--------------------------
int     main(){
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
}



