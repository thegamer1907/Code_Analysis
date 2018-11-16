#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define pb push_back
#define fast_io cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)
#define deb1(x)                cout<<#x<<": "<<x<<endl
#define deb2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define deb3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define deb4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define deb5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define deb6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define inf 1000000000;

using namespace std;

//vector < pair<ll,ll> >interval;
//vector <ll> adj[200001];
//ll vis[200001];
//ll ans[200001];
//vector <ll> arr;
//map <ll,ll> m;
//ll k;
//ll par[100001];
//ll d[100001];
//ll days[100001];
//map < pair<ll,ll>,ll > m;
//ll tree[4*1000001];
//ll arr[1000000];

/*void bfs(int x) {
    queue <int> q;
    q.push(x);
    vis[x]=1;
    ans[x]=0;
    int k;
    vector <ll>::iterator it;
    while(!q.empty()){
        k = q.front();
        q.pop();
        //cout << k << endl;
        for (it=adj[k].begin();it!=adj[k].end();it++) {
            if(vis[*it]==0) {
                q.push(*it);
                vis[*it]=1;
                ans[*it]=ans[k]+1;
            }
        }
    }
}*/

/*ll dfs(ll ver){
    vis[ver]=1;
    arr.pb(ver);
    m[ver]=k;
    k++;
    ll cur;
    ll flag=0;
    ll ret_val=0;
    for(ll x=0;x!=adj[ver].size();x++){
        cur = adj[ver][x];
        if(!vis[cur]){
            ret_val += dfs(cur);
            flag=1;
        }
    }
    if(flag==0){
        cnt[ver]=1;
        return 1;
    }
    else{
        cnt[ver]=ret_val+1;
        return ret_val+1;
    }
}*/

/*ll m=1000000007;

ll invmod(ll a,ll n,ll mod){
    ll result = 1;
    while(n>0){
        if(n%2==1){
            result = (result*a)%mod;
        }
        a = (a*a)%mod;
        n = n/2;
    }
    return result;
}*/

/*ll fact(ll a){
    if(a==0)return 1;
    return (a*fact(a-1))%m;
}

ll choose(ll n,ll r){
    ll num=fact(n);
    ll den=(fact(r)*fact(n-r))%m;
    return ;
}*/

/*void build(ll node,ll start,ll end,ll cnt){
    if(start==end){
        tree[node]++;
        return;
    }
    ll mid=(start+end)/2;
    if(cnt<=mid)build(2*node+1,start,mid,cnt);
    else build(2*node+2,mid+1,end,cnt);
    tree[node] = tree[2*node+1] + tree[2*node+2];
}*/

/*ll query(ll node,ll start,ll end,ll left,ll right){
    if(end<left || start>right){
        return 0;
    }
    else if(start>=left && end<=right){
        return tree[node];
    }
    else{
        ll mid=(start+end)/2;
        //cout << mid << "\n";
        //cout << (query(2*node+1,start,mid,left,right)) << "\n";
        //cout << (query(2*node+2,mid+1,end,left,right)) << "\n";
        return query(2*node+1,start,mid,left,right) + query(2*node+2,mid+1,end,left,right);
    }
}*/

int main(){
    fast_io;
    
    ll t,k,i,j,mod=1000000000+7,a,b;
    cin >> t >> k;
    ll dp[100001];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(i=1;i<=100000;i++){
        if((i-k)>=0){
            dp[i]=(dp[i]+dp[i-k])%mod;
        }
        dp[i]=(dp[i]+dp[i-1])%mod;
    }
    ll prefix[100001];
    prefix[0]=dp[0];
    for(i=1;i<=100000;i++){
        prefix[i]=(prefix[i-1]+dp[i])%mod;
    }
    while(t--){
        cin >> a >> b;
        cout << (prefix[b]-prefix[a-1]+mod)%mod << "\n";
    }
}














