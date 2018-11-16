#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int mx = *max_element(a, a+n);
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        ans += mx - a[i];
    }
    cout << ans << endl;
}
