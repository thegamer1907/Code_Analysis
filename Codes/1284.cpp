#include <bits/stdc++.h>

using namespace std;

string a[1003],b[1003];
map<string, int>mp;
int n,m;
int k;
int res_1, res_2;

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++ i)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    for(int i = 0; i < m; ++ i)
    {
        cin >> b[i];
        mp[b[i]]++;
        if(mp[b[i]] == 2) k++;
    }
    k%=2;
    for(int i = 0; i < n; ++ i)
        if(mp[a[i]] == 1) res_1++;
    for(int i = 0; i < m; ++ i)
        if(mp[b[i]] == 1) res_2++;
    while(true)
    {
        if(k%2)
        {
            if(res_2)
            {
                res_2--;
                k++;
            }
            else
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            if(res_1)
            {
                res_1--;
                k++;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
}
