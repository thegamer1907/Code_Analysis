#include <bits/stdc++.h>

using namespace std;
#define maxn 1000005
int n,m;
int a[maxn],b[maxn],res=0;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) <= 1)
            {
                b[j] = 1000;
                res++;
                break;
            }
    cout<<res;
    return 0;
}
