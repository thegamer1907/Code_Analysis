#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl ;

const ll inf = 1e9 + 111;
const int maxn = 1e2 + 10;
const int maxq = 1e6 +10;
const int alf = 26;

int b[maxn],g[maxn];

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    sort(b,b+n);
    sort(g,g+m);
    int p1 =0 , p2 =0;
    int ans = 0;
    while(p1<n && p2<m){
        if(abs(b[p1]-g[p2])<=1){
            ans++;
            p1++;
            p2++;
            continue;
        }
        if(b[p1]>g[p2]){
            p2++;
        }else{
            p1++;
        }
    }
    cout<<ans;
    return 0;
}

