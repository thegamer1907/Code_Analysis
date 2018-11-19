#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef double D;
typedef long long ll;
typedef pair<ll,ll> pll;
const ll mod=1000000007;
const ll inf=(1ll<<62);
const int MX=300;
string t,s[MX];
int n;
int main(){
    cin>>t>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==t){
            puts("YES");
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][1]==t[0]&&s[j][0]==t[1]){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
