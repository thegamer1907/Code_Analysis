#include "bits/stdc++.h"
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

using namespace std;

typedef long long  ll;

const int N = 1e6 + 5;


int main(){
    fast;
    ll n,c=0;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll j=n-1;
    for(int i=(n/2)-1;i>=0;i--){
        if(2*a[i]<=a[j]){
            j--;
            c++;
        }
    }
    cout<<n-c;


}







