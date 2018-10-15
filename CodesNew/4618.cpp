#include <bits/stdc++.h>

#define dola ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

const int N = 5e5 + 5, MOD = 1e9 + 7;

int n, x[N];

int main()
{
    dola
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    int i = n - 1, j = (n / 2) - 1, c = n;
    while(i >= n / 2 && j >= 0)
    {
        if(x[i] >= x[j] * 2)
        {
            c--;
            i--;
            j--;
        }
        else
        {
            j--;
        }
    }
    cout << c << endl;
    return 0;
}
