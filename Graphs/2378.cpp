#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define clean(a,x) memset(a,x,sizeof(a))
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define endl '\n'
#define pii pair<int,ll >
#define fi first
#define se second
#define s(x) scanf("%d",&x)
#define p(x) printf("%d ",x)
#define sl(x) scanf("%lld",&x)
#define pl(x) printf("%lld ",x)
#define ss(x) scanf("%s",&x)
#define ps(x) printf("%s ",&x)
#define nl printf("\n")
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 100005

int level, parent[2002];

void dfs(int i){
    level ++;
    if(parent[i] != -1)
        dfs(parent[i]);
}

int main(){
    int n, i, x, ans = 1;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>x;
        parent[i] = x;
    }
    for(i = 1; i <= n ; i++){
        level = 0;
        dfs(i);
        ans = max(ans, level);
    }
    cout<<ans<<endl;
}
