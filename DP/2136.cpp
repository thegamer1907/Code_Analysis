#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, a[100005], l, ans[100005] ;
    cin>> n >> m;
    for (int i=0; i<n; i++)
        cin >> a[i];
    map<int, int>mp;
    for(int i = n-1; i >= 0; i--)
    {
        mp[a[i]] = 1;
        ans[i+1] = mp.size();
    }
    for (int i=0; i<m; i++)
    {

        cin >> l;
        cout << ans[l] << endl;
    }
}
