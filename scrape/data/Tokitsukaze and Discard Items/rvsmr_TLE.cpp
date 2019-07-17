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
        // cout << *it << " " << pg <<  " " << it - p.begin() << endl;
        long long int inc = it - p.begin() - prev;
        if(inc == 0)
        {
            if(*it != p.back())
            {
                inc = max(k, *(it + 1) - *it);
            }
            else
            {
                inc = k;
            }
        }
        else
            res++;
        pg += inc;
        prev = it - p.begin();
    }
    cout << res << endl;
    return 0;
}