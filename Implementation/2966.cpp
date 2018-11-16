/*   Then, everything changed when the Fire Nation attacked. */

#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define mod 1000000007
#define fi first
#define se second
using namespace std;
int n;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    // shuffle(permutation.begin(), permutation.end(), rng);
    cin>>n;
    int sol = 0;
    for(int i=1;i<=n;++i)
    {
        cin >> s;
        if(s[0] == 'T')
            sol += 4;
        if(s[0] == 'C')
            sol += 6;
        if(s[0] == 'O')
            sol += 8;
        if(s[0] == 'D')
            sol += 12;
        if(s[0] == 'I')
            sol += 20;
    }
    cout << sol;
    return 0;
}
