#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    long long int n,m,k; cin >> n >> m >> k;
    vector<long long int> p(m);
    for(int i=0;i<m;i++)
    {
        cin >> p[i];
    }
    long long int pg = k;
    long long int prev = 0;
    long long int res = 0;
    while(pg < p.back() + k)
    {
        auto it = upper_bound(p.begin(), p.end(), pg);
        long long int inc = it - p.begin() - prev;
        // cout << pg <<  " " << inc << " " << prev  << " " << *it << endl;
        if(inc == 0)
        {
            long long int x = 1;
            x = max(x,(*it - pg + k-1)/k);
            inc = x*k;
        }
        else
        {
            res++;
            prev = it - p.begin();
        }
        pg += inc;
    }
    cout << res << endl;
    return 0;
}