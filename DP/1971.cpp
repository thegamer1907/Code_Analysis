//In the name of Allah
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
typedef pair<int,int> PII;
#define fr(i,a,n) for (int i=a;i<n;i++)
#define frdc(i,a,n) for (int i=n-1;i>=a;i--)
#define all(x) (x).begin(),(x).end()
#define Accepted ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define lop(i,n) for(int i=0; i<n; i++)
int main() {
    Accepted
    ll n,m;cin>>n>>m;
    set<ll> st;
    int *ar = new int[n];
    int *ans = new int[m];
    fr(i,0,n)cin>>ar[i];
    frdc(i,0,n){
        st.insert(ar[i]);
        ar[i] = st.size();
    }
    fr(i,0,m){int u;cin>>u;cout<<ar[u-1]<<endl;}
    return 0;
}
