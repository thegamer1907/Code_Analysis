#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define sez(a) (int)(a.size())
const int maxn=2e5+100;
const int MOD=1e9+7;
const ll INF=1e18;
const ld PI=3.141592653589793;
string w[101];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifdef kolya
  //      freopen("input.txt","r",stdin);
  //      freopen("output2.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
        cin>>w[i];
    }
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            string z=w[i]+w[j];
            int zz=z.find(s);
            if (zz!=-1){
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO";
}
