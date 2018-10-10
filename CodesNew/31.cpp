#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , l;
    cin >> n >> l;
    l++;
    int A[n];
    for(int i = 0 ; i < n ; i++)
        cin >> A[i];
    sort(A , A + n);
    double ans = 0;
    for(int i = 0 ; i < n - 1 ; i++)
        ans = max(ans , double(A[i + 1] - A[i]) / 2.0);
    ans = max(ans , double(max(A[0] , l - A[n - 1] - 1)));
    cout << setprecision(10) << fixed << ans;
    return 0;
}