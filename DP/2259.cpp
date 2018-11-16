#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n , m;  cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)  cin >> a[i];
    int l[m];
    for(int i = 0; i < m; i++)  cin >> l[i];

    int dp[n];
    set <int> num;

    for(int i = n-1; i >= 0; i--)
    {
        num.insert(a[i]);
        dp[i] = num.size();
        //cout << dp[i] << ' ';
    }
    for(int i = 0; i < m; i++)
        cout << dp[l[i]-1] << endl;

    return 0;
}
