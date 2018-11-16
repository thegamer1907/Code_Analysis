#include <bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(false)
#define ll long long int
ll mod = 1000000009;
ll fast_expo(ll a,ll n){
    if(n ==0){
        return 1;
    }
    else if(n ==1){
        return a%mod;
    }
    else{
        ll R = fast_expo(a,n/2);
        ll ans = ((R%mod)*(R%mod))%mod;
        if(n%2 ==0){
            return ans;
        }
        else{
            return ((a%mod)*(ans%mod))%mod;
        }
    }
}
ll mod_inv(ll a){
    return fast_expo(a,mod-2);
}
ll modulo_sub(ll a,ll b){
    return (a%mod - b%mod+mod)%mod;
}
ll modulo_div(ll a,ll b){
    return (a%mod*(mod_inv(b)%mod))%mod;
}
ll modulo_add(ll a,ll b){
    return ((a%mod + b*mod)%mod);
}
ll modulo_mul(ll a,ll b){
    return ((a%mod)*(b%mod))%mod;
}
ll nCr(ll n,ll r){
    if (r==0)
      return 1;
    int fac[n+1];
    fac[0] = 1;
    for (int i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%mod;
    return modulo_mul(fac[n],modulo_mul(mod_inv(fac[r]),mod_inv(fac[n-r])));
}
int vis[10001] = {};
vector<int> vec[10001];
int color[10001];
int countt=0;
void dfs(int node,int subtreecolor){
    vis[node] = true;
  //  cout<<node<<" "<<subtreecolor<<" "<<color[node]<<endl;
    if(color[node] != subtreecolor){
        countt++;
    }
    for(int i=0;i<vec[node].size();i++){
        if(vis[vec[node][i]] == false){
            dfs(vec[node][i],color[node]);
        }
    }
}
int main()
{
    speed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);   
        freopen("output.txt", "w", stdout);
    #endif          
    int n;
    cin>>n;
    int x,y;
    for(int i=1;i<=n-1;i++){
        cin>>x;
        vec[i+1].push_back(x);
        vec[x].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        cin>>y;
        color[i+1] = y;
    }
    dfs(1,0);
    cout<<countt;
    return 0;
    }