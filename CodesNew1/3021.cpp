#include <iostream>
#include <string>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <iomanip>

#define forn(i,a,b) for(int i = a; i < b; i++)
#define ll long long
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    int k1 = 0;
    vector<int> p;

    forn(i,0,n)
    if(s[i] == '1') p.push_back(i);
    /*
    forn(i,0,p.size()) cout << p[i] << " ";
    cout << endl;
    */
    int i1 = 0;
    int i2 = k-1;
    int m = p.size();
    ll ans = 0LL;
    if(k == 0)
    {
        int i = 0;
        int len = 0;
        while(i < n)
        {
            if(s[i] == '1') {
                ans += len*1LL*(len+1) / 2;
                len = 0;
                i++;
                continue;
            }
            len++;
            i++;
        }
        ans += len*1LL*(len+1) / 2;
        cout << ans;
        return 0;
    }
    while(i2 < m)
    {
        int x1, x2;
        if(i1 == 0)
        {
            x1 = p[i1]+1;
        }
        else
            x1 = p[i1]-p[i1-1];
        if(i2 == m-1)
        {
            x2 = n-p[i2];
        }
        else x2 = p[i2+1]-p[i2];

        //cout << x1 << " " << x2 << endl;
        ans += x1*1LL*x2;

        i1++;
        i2++;
    }
    cout << ans;
    return 0;
}
