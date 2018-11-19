#include<bits/stdc++.h>
using namespace std;

bool present[16];
vector<int> v;
int k;

bool check(vector<int> &u)
{
    bool ok = 1;
    for(int i = 0; i < k; i++)
    {
        int ones = 0, zrs = 0;
        for(int j = 0; j < (int)u.size(); j++)
            if(u[j] & (1 << i))
                ones++;
            else
                zrs++;
        if(ones > zrs)
            ok = 0;
    }
    return ok;
}

int main()
{
    int n, x;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
    {
        int res = 0;
        for(int j = k - 1; j >= 0; j--)
        {
            scanf("%d", &x);
            res += ((1 << j) * x);
        }
        present[res] = 1;
    }
    for(int i = 0; i < 16; i++)
        if(present[i])
            v.push_back(i);
    n = (int)v.size();

    for(int mask = 1; mask < (1 << n); mask++)
    {
        vector<int> u;
        for(int i = 0; i < n; i++)
            if(mask & (1 << i))
                u.push_back(v[i]);
        if(check(u))
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
