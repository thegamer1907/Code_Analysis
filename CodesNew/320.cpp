#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t, i, x=0, s=0, ans=0;
    cin>> n>> t;
    
    long long a[n];
    
    for(i=0; i<n; ++i)
        cin>> a[i];
    
    for(i=0; i<n; ++i)
    {
        s+=a[i];
        
        while(s>t)
        {
            s=s-a[x++];
        }
        ans=max(ans, i-x+1);
    }
    
    cout<< ans;
    
    return 0;
}