#include <bits/stdc++.h>
#define fi first
#define se second
#define FOR(i,j,k) for(int i=(j);i<(k);i++)
#define FOI(i,j,k) for(int i=(j);i<=(k);i++)
#define FOD(i,j,k) for(int i=(j);i>=(k);i++)
#define DEBUG(x) cout<<(#x)<<" = "<<(x)<<endl;
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
using namespace std;

map<char,bool> sa,sb;
map<string,bool> ss;

int main() {
    ios_base::sync_with_stdio(false);

    char c,d;cin>>c>>d;
    int n;cin>>n;
    FOR(i,0,n){
        char a,b;cin>>a>>b;
        sa[a]=true; sb[b]=true;
        ss[string("")+a+b]=true;
    }
    if(ss[string("")+c+d]||(sa[d]&&sb[c])){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}