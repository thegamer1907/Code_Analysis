#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
// Check Examples
#define asp ""
#define aps ''
#define one 1
#define two 2
#define dif != 
 
//Compiler version g++ 6.3.0
 
int main(){
    
    long long n,m,k;
    vector<ll> g;
    
    cin >> n >> m >> k;
    for(ll i=0;i<m;i++){
        ll a;
        scanf("%lld",&a);
        a--;
        g.push_back(a);
    }
    
    sort(g.begin(),g.end());
    int cont = 0;
    ll teto = k;
    ll resto;
    ll mult;
    int add=0;
    bool ok = false;
    for(ll i=0;i<m;i++){
        if(g[i] < teto){
            ok = true;
            add++;
        }
        else{
            if(ok){
                ok = false;
                cont++;
                teto += add;
                add = 0;
                i--;
            }
            else{
                resto = (g[i] - teto);
                mult = resto/k;
                teto += (mult+one)*k;
                 i--;
            }
        }
    }
    if(ok) cont++;
    cout << cont << endl;
}