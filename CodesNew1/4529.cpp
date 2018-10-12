#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5;
long long int n;


int main() {
    long long int i,n,m,t1=0,t2=0;
    long long s1=0,s2=0;
    cin >>n; long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }sort(a,a+n);t2=n/2 +1;
    if(n%2 ==0 )t2--;
    //for(i=0;i<n/2;i++)
    while(t2<=n-1)
    {
        if((a[t1]*2)<=a[t2]){t1++;}
        t2++;
    }
    cout<<n-t1;
    return 0;
}