#include <bits/stdc++.h>

using namespace std;

const int maxN = 150000;



int main()
{
    int n,k;

    cin>>n>>k;

    int h[n];
    long sum[n];
    for(int i = 0; i<n; i++)
    {
        cin>>h[i];
        if(i)
            sum[i] = h[i]+sum[i-1];
        else
            sum[i] = h[i];
    }

    long ans = 0;

    for(int i = 1; i<=n-k; i++)
    {
        long sm = (ans) ? sum[ans+k-1] - sum[ans-1] : sum[ans+k-1];
        long tar = sum[i+k-1] - sum[i-1];
        if(tar < sm)
            ans = i;
    }

    cout<<ans+1;




    return 0;
}
