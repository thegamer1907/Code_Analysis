#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main() {
    ll n,s;
    ll tab[100005];
    ll tab2[100005];
    ll ans=0;
    ll res=0;
    ll maxi=0;
    cin >> n >> s;
    for(int i=1;i<=n;i++) {
        cin >> tab[i];
    }
    ll l=0;
    ll r =n;
    ll mid;
    while(l<r) {
        ans=0;
        mid = (l+r)/2;
        mid++;
        for(int i=1;i<=n;i++) {
            tab2[i]=tab[i]+(i)*(mid);
        }
        sort(tab2+1, tab2+n+1);
        for(int i=1;i<=mid;i++)
            ans+=tab2[i];
        if(ans>s)
            r=mid-1;
        else {
            if(mid>maxi) {
                maxi=mid;
                res=ans;
            }
            l=mid;
        }
    }
    cout << maxi << " " << res << endl;
}
