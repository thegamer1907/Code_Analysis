#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll POW[1000100],hashA[1000100],n;
bool pf[1000010];
string s;
vector<int> a;
const ll mod = round(1e9) + 7;
ll getHash(ll i,ll j){
    return (hashA[j] - hashA[i-1]*POW[j-i+1] + mod * mod) % mod ;
}
ll check(ll i){
    ll l = 1,r = n-i,res = 0;
    while(l<=r){
        ll mid = (l+r) / 2;
        if(getHash(1,mid) == getHash(i,i+mid-1)) {
            l = mid+1;
            res = max(res,l-1);
        }else r = mid-1;
    }
    return res;
}
int main()
{
    string s;
    memset(pf,false,sizeof pf);
    cin >> s; n = s.size(); s = '~' + s; POW[0] = 1; a.clear();
    for(int i = 1;i<=n;i++) POW[i] = (POW[i-1] * 26) % mod;
    for(int i = 1;i<=n;i++) hashA[i] = (hashA[i-1]*26 + s[i] - 'a') % mod;
    ll res = 0,mmax = 0;
    for(int i = 2;i<=n;i++)  mmax = max(mmax,check(i));
    for(int i = 1;i<=n;i++){
        //cout << getHash(1,i) << " " << getHash(n-i+1,n) << "\n";
        if(getHash(1,i) == getHash(n-i+1,n) && i<=mmax) {
            res = max(res,i*1ll);
        }
    }
    for(int i = 1;i<=res;i++) cout << s[i];
    if(res == 0) cout << "Just a legend";
    return 0;
}
