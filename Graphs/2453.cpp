#include        <bits/stdc++.h>
#define ll      long long int
#define pb      push_back
#define F       first
#define S       second
#define MOD     1000000007
#define pii     pair<int,int>
#define vi      vector<int>
#define fio     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N       10010
#define M       1000010
using namespace std;

vi g[N];
int a[N];
int ans=0;

void dfs(int x, int c){
    if(a[x]!=c){
        c=a[x];
        ans++;
    }
    for(auto it:g[x]){
        dfs(it,c);
    }
}


int main() {
    fio;
    int n,x;
    cin>>n;
    for(int i=2; i<=n; i++){
        cin>>x;
        g[x].pb(i);
    }
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    dfs(1,0);
    cout<<ans;
    return 0;
}
























