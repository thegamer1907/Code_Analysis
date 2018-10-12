#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,i,kmax,kmin,res=0;
    cin>>n>>m;
    long long a[n];
    for (i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    
    long long diff=0;
    for (i=0;i<n-1;i++){
        diff+=a[n-1]-a[i];
    }
    if (m<=diff) kmin=a[n-1];
    else{
        if ((m-diff)%n==0) kmin=a[n-1]+(m-diff)/n;
        else kmin=a[n-1]+(m-diff)/n + 1;
    }
    
    kmax=a[n-1]+m;
    cout<<kmin<<" "<<kmax<<endl;
    return 0;
}