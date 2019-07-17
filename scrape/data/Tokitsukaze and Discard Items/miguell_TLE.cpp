#include<bits/stdc++.h>
using namespace std;
#define rc(x) return cout<<x<<endl,0
#define pb push_back
#define dbg(x) cout << #x << '=' << x << '\n';
#define ll long long
#define int ll
#define sz size()
#define x first
#define y second
#define pi pair <int, int>
#define pii pair <int, pi>
#define vi vector <int>
const ll mod = 1e9 + 7;
int n, m, k, p[100002];

int32_t main(){
    ios_base :: sync_with_stdio(0); cin.tie(); cout.tie();
    cin>>n>>m>>k;
    for(int i=1; i<=m; i++) cin>>p[i];
    int cur=1, cnt=0, ans=0;
    while(cnt<=m){
        int xd=(((p[cur]-cnt-1)/k)+1)*k+cnt;
        while(cur<=m && p[cur]<=xd){
            cnt++;
            cur++;
        }
        ans++;
    }
    cout<<ans;
}