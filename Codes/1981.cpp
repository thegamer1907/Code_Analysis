#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
#define pb(k) push_back(k)
#define mp(k,d) make_pair(k,d)
#define ts(k) to_string(k)
#define F first
#define S second
#define INF (ll)(1e9+7)
#define ll long long
#define ld long double
#define pii pair<int, int>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    //cout<<fixed;
    //cout.precision(12);
    ll n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    map<ll,ll>m1,m2,m3;
    m1[a[0]]++;
    for(int i=1;i<n;i++){
        if((a[i]%(k*k))==0)
            m3[a[i]]+=m2[a[i]/k];
        if(a[i]%k==0)
            m2[a[i]]+=m1[a[i]/k];
        m1[a[i]]++;
    }
    for(auto i: m3){
        sum+=i.S;
    }
    cout<<sum;
}