#include <bits/stdc++.h>

#define int long long

using namespace std;

set<int> ar;

int n, q, w;

int32_t main()
{
    cin >> n >> q >> w;
    if(q > w) swap(q, w);
    for(int i = 0 ; i < n ; i ++) ar.insert(i + 1);
    int ans = 0;
    vector<int> a;
    while(ar.size() > 2)
    {
        ans ++;
        a.clear();
        for(auto j : ar)
        {
            a.push_back(j);
        }
        for(int i = 0 ; i < a.size() ; i += 2)
        {
            if( a[i] == q )
            {
                if(a[i + 1] == w)
                {
                    cout << ans << endl;
                    return 0;
                }
                ar.erase( a[i + 1] );
                continue;
            }
            if(a[i] == w)
            {
                if(a[i + 1] == q)
                {
                    cout << ans << endl;
                    return 0;
                }
                ar.erase( a[i + 1] );
                continue;
            }
            ar.erase( a[i] );
        }
    }
    cout << "Final!" << endl;
}
