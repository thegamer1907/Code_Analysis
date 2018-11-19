#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#define FINAL_OUT(x) {cout << (x) << '\n'; exit(0);}



int main()
{
//    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);

    int n,k;
    cin >> n >> k;

    if (k <= 2)
    {
        vector<int> cnt(k);
        for(int i = 0; i < n; ++i)
        for(int j = 0; j < k; ++j)
        {
            int cur;
            cin >> cur;
            cnt[j] |= cur == 0;
        }
        int sum = 0;
        cout << (accumulate(begin(cnt), end(cnt), sum) == k? "YES\n" : "NO\n");
    }
    else
    {
        vector<int> cnt(1 << k, 0);
        vector<int> res(k, 0);
        for(int i = 0; i < n; ++i)
        {
            int cur = 0;
            for(int j = 0; j < k; ++j)
            {
                int tmp;
                cin >> tmp;
                cur += tmp << j;
                res[j] |= tmp == 0;
            }
            ++cnt[cur];
        }

        if (cnt[0])
            FINAL_OUT("YES");

        for(int i = 0; i < k; ++i)
        {
            int mask = 1 << i;
            if (cnt[mask] && res[i])
            {
                FINAL_OUT("YES");
            }
        }

        int allMask = (1 << k) - 1;
        for(int i = 0; i < k; ++i)
        for(int j = i + 1; j < k; ++j)
        {
            int mask = allMask - (1 << i) - (1 << j);
            int negmask = allMask & (~mask);
            if (cnt[mask] && cnt[negmask])
                FINAL_OUT("YES");
        }
        FINAL_OUT("NO");
    }
}
