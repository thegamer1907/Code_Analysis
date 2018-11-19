#include <iostream>
using namespace std;
#define ll long long int
#define ss string
ss a, c;
ll r;
bool v,b,n,m;
int main() {
    cin>>a>>r;
    for(ll i=1; i<=r; i++){
        cin>>c;
        if(c==a){
            cout<<"YES"; return 0;
        }
        if(c[0]==a[1]){ v= true;}
        if(c[1]==a[0]){ b= true;}
    }
    if(b&v) cout<<"YES";
    else cout<<"NO";
    return 0;
}
