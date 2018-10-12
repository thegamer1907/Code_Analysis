//Kartik Anand
#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%I64d",&x)
#define scs(x) scanf("%s",x)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define pi pair<int,int>
#define pl pair<ll,ll>
const int N=2e5+5;
vector <ll> a;
int main(){
    fast_io;
    int n,q;
    cin>>n>>q;
    int s;
    for(int i=0;i<n;i++){
        cin>>s;
        a.pb(s);
        if(i!=0)
        a[i]+=a[i-1];
    }
    ll x,sum=0;
    while(q--){
        cin>>x;
        sum+=x;
        if(sum>=a[n-1]){
            cout<<n<<"\n";
            sum=0;
            continue;
        }
        int idx=lower_bound(a.begin(),a.end(),sum)-a.begin();
        if(a[idx]==sum){
            cout<<n-idx-1<<"\n";
        }
        else{
            cout<<n-idx<<"\n";
        }
    }
    return 0;
}
