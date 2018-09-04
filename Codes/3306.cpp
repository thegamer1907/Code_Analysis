#define pb push_back
#define ff first
#define ss second
#define ll long long
#include <bits/stdc++.h>
using namespace std;
ll a[1000006],rem,step;
vector<pair<ll,ll> >v;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        rem = a[i]%n;
        step = a[i]/n;
        if(rem>=i)step++;
        v.pb(make_pair(step,i));
    }
    sort(v.begin(),v.end());
    cout<<v[0].ss;
    return 0;
}
