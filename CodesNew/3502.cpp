#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,a,b) for(ll i=a;i <= b;i++)
#define fast_io ios_base::sync_with_stdio(false)
#define pb push_back
#define fir first
#define sec second
#define tr(it,x) for(it = x.begin();it != x.end();it++)
#define mp make_pair
#define sz(x) (ll)x.size()
#define rep(i,n) for(ll i=0;i<n;i++)
#define double long double
#define accuracy ll precision = numeric_limits<double>::digits10
#define pll pair<ll,ll>
#define N 100005
#define all(x) (x).begin(),(x).end()

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n,0);
    rep(i,n)cin>>a[i];
    sort(all(a));
    int maxans = a[n-1] + m,minans=0;
    int deficit = 0;
    rep(i,n)deficit += a[n-1]-a[i];
    if(deficit >= m){
        minans = a[n-1];
    }
    else{
        m -= deficit;
        if(m%n!=0){
            minans = m/n + 1 + a[n-1];
        }
        else{
            minans = m/n + a[n-1];
        }
    }
    cout<<minans<<" "<<maxans<<endl;
}