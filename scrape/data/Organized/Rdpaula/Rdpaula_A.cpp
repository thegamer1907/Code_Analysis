#include<bits/stdc++.h>
#define pi 3.1415
#define ll long long
#define pii pair<ll,ll>
#define debug(a) cout<<a<<'\n'
#define maxn 100009
#define MOD 1000000007
#define inp freopen("input.txt", "r", stdin)
#define out freopen("out.txt", "w", stdout)
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    ll n,m,k;
    cin>>n>>m>>k;
    ll vet[maxn];
    for(ll i=0;i<m;i++){
        cin>>vet[i];
    }
    vector<ll> defi;
    for(ll i=0;i<m;i++){
        if(vet[i]%k!=0)defi.push_back(vet[i]/k+1);
        else defi.push_back(vet[i]/k);
    }
    bool cond=true;
    ll ans=0;
    ll analyse=1;
    ll cont=0;
    while(cond){
    bool retir=false;
    ll contact=0;
    for(ll i=cont;i<m;i++){
        if((vet[i]-cont)%k!=0 && ((vet[i]-cont)/k+1)==analyse){
            retir=true;
            contact++;
        }
        else if((vet[i]-cont)%k==0 && (vet[i]-cont)/k==analyse){
            retir=true;
            contact++;
        }
        else break;
    }
    cont+=contact;
    if(retir==true)ans++;
    if(cont==m)cond=false;
    if((vet[cont]-cont)%k!=0)analyse=(vet[cont]-cont)/k+1;
    else analyse=(vet[cont]-cont)/k;
}
    cout<<ans<<endl;
    return 0;
}