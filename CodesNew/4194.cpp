#include <bits/stdc++.h>
#define ll long long
#define F firsq
#define S second
#define SI size()
#define pb push_back
using namespace std;
ll i,m,n,sum,a[200007],t;
int main(){
    cin>>n>>t>>a[0];
    for (i=1;i<n;i++){cin>>a[i];a[i]+=a[i-1];}
    while (t--)
        {

            ll x;
            cin>>x;
            m+=x;
            sum=upper_bound(a,a+n,m)-a;
            if(sum==n){m=0;sum=0;}
            cout<<n-sum<<endl;
        }
}
