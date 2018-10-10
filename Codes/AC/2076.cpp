#include <bits/stdc++.h>
#define re return
#define ull unsigned long long
#define ll long long
#define ld long double
#define mid (l+r)/2
#define f first
#define s second
#define oo 1e9
#define pi acos(-1)
#define OO 1e18
#define EPS 1e-12
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define Hossam_Yehia ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
int n;
ll arr[200005];
ll ans,temp,k;
map<ll,ll> lft,rht;
int main(){
    Hossam_Yehia;
    cin >> n >> k;
    for(int i=0;i<n;++i)
        cin >> arr[i],rht[arr[i]]++;
    for(int i=0;i<n;++i){
        if(arr[i]%k==0)
            temp=lft[arr[i]/k];
        else temp=0;
        rht[arr[i]]--;
        lft[arr[i]]++;
        ans+=(temp*rht[arr[i]*k]);
    }
    cout<<ans<<endl;
    re 0;
}