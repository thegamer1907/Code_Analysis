#include <iostream>
using namespace std;

int main()
{
    int n, S[100001];
    cin >> n;
    S[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        S[i] = S[i - 1] + a;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (S[mid] < q) l = mid + 1;
            else if (S[mid - 1] < q) l = r = mid;
            else r = mid - 1;
        }
        cout << l << '\n';
    }
    return(0);
}