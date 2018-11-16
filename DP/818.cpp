#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 4007;
const int inf = 1e18+7;
const int mod = 1e9+7;


signed main() {
    fio;
    int n; cin>>n;
    int a[n]; for (int i=0; i<n; i++) cin>>a[i];
    
    int f=0,s=0,k=0;
    for(int i=0; i<n; i++)
    {
        if (a[i]==1)
        {
            f++;
            if (s>0)
                s--;
        }
        else
            s++;
            
        if (s>k) k=s;    
    }
    if (k==0)
        f--;
    cout<<f+k;
    return 0;
}