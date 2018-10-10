#include <bits/stdc++.h>
using namespace std;

const int OO = 0x3f3f3f3f ,N = 2e5+5 ,mod = 1e9+7 ;
#define read(FILE)  freopen(FILE, "r", stdin);
#define write(FILE) freopen(FILE, "w", stdout);
#define BeatMeIFUCAN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n ,k ,arr[N] ;
unordered_map<long long,long long> mp ,res ;
long long ans ;
long long C(long long x){
    if(x<3) return 0 ;
    return x*(x-1)*(x-2)/6;
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;++i) scanf("%d",arr+i) ;
    for(int i=n-1;i>=0;--i){
        ++mp[arr[i]] ;
        if(!arr[i]) continue ;
        if(arr[i]%k==0) res[arr[i]/k] += mp[1ll*arr[i]*k] ;
        ans += res[arr[i]] ;
    }
    ans += C(mp[0]) ;
    if(k==1){
        ans = 0 ;
        for(auto &ptr:mp) ans += C(ptr.second) ;
    }
    cout<<ans;
    return 0;
}
