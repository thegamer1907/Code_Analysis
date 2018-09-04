#include <bits/stdc++.h>

using namespace std;

const int N=1000070; //10e6

#define ll long long int
#define inf 0x3f3f3f3f
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define ii tuple<int, int>
#define all(x) (x).begin(), (x).end()

vector<int>v;
bool vis[10000070];
ll quant[10000070];
ll soma[10000070];
ll mp[10000070];

int main(int argc, char const *argv[]){
    memset(vis, false, sizeof vis);
    for(int i=2; i<=10000000; i++){
        if(!vis[i]){
            v.pb(i);
            for(int j=i+i; j<=10000000; j+=i){
                vis[j]=true;
            }
        }
    }
    int n;
    scanf("%d", &n);
   
    for(int i=0; i<n; i++){
        ll a;
        scanf("%lld", &a);
        mp[a]++;
    }
    for(int i=0; i<v.size(); i++){
        for(ll j=v[i]; j<=10000000; j+=v[i]){
            quant[v[i]]+=mp[j];
        }
    }
    
    int prev=2;
    soma[2]=quant[2];
    for(int i=1; i<v.size(); i++){
        soma[v[i]]=soma[prev]+quant[v[i]];
        prev=v[i];
    }
    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        ll a, b;
        scanf("%lld %lld", &a, &b);
        ll ans=0;
        auto up=lower_bound(v.begin(), v.end(), b);
        auto lo=lower_bound(v.begin(), v.end(), a);
        ll upper;
        if(up==v.end())upper=soma[v[v.size()-1]];
        else{
            if(*up>b)up--;
            upper=soma[*up];
        }
        
        if(*lo==2){
            printf("%lld\n", upper);
        }else{
            lo--;
            printf("%lld\n", upper-soma[*lo]);
        }
       
    }
	return 0;
}