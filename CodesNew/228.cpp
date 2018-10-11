#include <bits/stdc++.h>

using namespace std;
int n;
long long t;
int a[100005];
long long s[100005];
int main()
{
    cin>>n>>t;
    s[0]=0;
    for (int i=1; i<=n; i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    int k=0;
    for (int i=1; i<=n; i++){
        int x=upper_bound(s+1, s+n+1, t+s[i-1])-s;
        k=max(k, x-i);
    }
    cout<<k;
    return 0;
}
