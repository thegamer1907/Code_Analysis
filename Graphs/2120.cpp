#include <bits/stdc++.h>
#define ll             	long long
#define pb             	push_back
#define mp             	make_pair
#define pii            	pair<int,int>
#define pll            	pair<long,long>
#define vi             	vector<int>
#define F              	first
#define S              	second
#define sz(x)          	(int)x.size()
#define MOD           	1000000007
#define MOD2          	1000000009
#define endl            "\n"
#define vl             	vector<long>
#define inf            	999999999999999999
#define sp(x)           fixed<<setprecision(x)
#define rep(i,k,n)      for(i = k; i < n; ++i)
#define repr(i,k,n)     for(i = k; i >= n; --i)
using namespace std;

struct node{
    int curr;
    int dis;
} a,b;

void solve(){
    int i,j;
    int n,m,t;
    string s;
    cin >> n>>m;
    bool vis[20005];
    memset(vis,false,sizeof vis);
    if(n==m){
        cout<<0;
        return;
    }
    a.curr=n;
    a.dis=0;
    queue<node> q;
    q.push(a);
    vis[n]=true;
    while(!q.empty()){
        b=q.front();
        q.pop();
        if(b.curr==m){
            break;
        }
        a.curr=b.curr-1;
        a.dis =b.dis+1;
        if(a.curr>0&&a.curr<=2*1e4&& !vis[a.curr]){
            q.push(a);
            vis[a.curr]=true;
        }
        
        a.curr=b.curr*2;
        a.dis =b.dis+1;
        if(a.curr>0 && a.curr<=2*1e4&& !vis[a.curr]){
            q.push(a);
            vis[a.curr]=true;
        }
    }
    cout<<b.dis;
    
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    
    return 0;
}