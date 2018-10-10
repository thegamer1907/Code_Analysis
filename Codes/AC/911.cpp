#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5 + 10;
int a[maxN] , b[maxN];

int main()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    for (int i=1  ;  i<=n  ;  i++)
    {
        a[i] = a[i-1] + (str[i-1] == 'a');
        b[i] = b[i-1] + (str[i-1] == 'b');
        //cerr << a[i] << " " << b[i] << endl;
    }

    int ans = 0;

    for (int l=0  ;  l<n  ;  l++)
    {
        int r1 = upper_bound (a+l+1, a+n+1, k+a[l]) - a - 1;
        int r2 = upper_bound (b+l+1, b+n+1, k+b[l]) - b - 1;
        ans = max ( ans , max(r1,r2)-l );
    }

    cout << ans;
}
