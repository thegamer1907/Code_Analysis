#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, t, a[10000000];
    cin>>n>>t;
    for(long long i=0;i<n-1;i++) cin>>a[i];
    for(long long i=0;i<t-1; )
    {
        i+=a[i];
        if(i==t-1) 
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}