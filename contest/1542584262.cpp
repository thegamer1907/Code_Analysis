#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define sez(a) (int)(a.size())
const int maxn=2e5+100;
const int MOD=1e9+7;
const ll INF=1e18;
const ld PI=3.141592653589793;
int cnt[100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifdef kolya
  //      freopen("input.txt","r",stdin);
  //      freopen("output2.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        int a,b,c,d;
        cin>>a;
        for(int j=1; j<k; ++j){
            a<<=1;
            cin>>b;
            a|=b;

        }
       // cout<<a<<"\n";
        cnt[a]++;
    }
    if (cnt[0]){
        cout<<"YES\n";
        return 0;
    }
    for(int i=1; i<16; ++i)
    for(int j=1; j<16; ++j){
        if (cnt[i] && cnt[j] && !(i&j)){
            cout<<"YES\n";
            return 0;
        }

    }
    cout<<"NO";

}
