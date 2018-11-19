#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    string s,a;
    ll p=0,q=0;
    ll n;
    cin>>s>>n;
    for(ll i=0;i<n;i++){
        cin>>a;
        if(a[0]==s[1])p=1;
        if(a[1]==s[0])q=1;
        if(a==s or (p==1 and q==1)){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
