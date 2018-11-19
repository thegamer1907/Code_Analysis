#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll,ll> pll;

#define fi first
#define se second
#define pb push_back
#define rank kgjksjsias
const int MAXN = 300000+10;
string b[500];
void solve(){
    string a;
    cin >> a;
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> b[i];
        if(b[i]==a){
            cout <<"YES";
            return;
        }
    }
    for(int i=1;i<=n;++i){
        for(int e=1;e<=n;++e){
            if(b[i][1]==a[0] && b[e][0]==a[1]){
                cout <<"YES";
                return;
            }
        }
    }
    cout <<"NO";

}
int main(){
    #ifdef zxc
        freopen("input.txt","r",stdin);
   //     freopen("output.txt","w",stdout);
    #endif // zxc
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();;
}

