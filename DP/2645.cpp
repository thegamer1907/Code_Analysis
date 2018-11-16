#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main()
{
    cout.precision(10); cout << fixed;
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int k;
    cin >> k;
    int cnt = 0;
    for(int i = 19; ; i++)
    {
        int c = 0;
        int g = i;
        while(g)
        {
            c += g % 10;
            g /= 10;
        }
        if(c == 10) cnt++;
        if(cnt == k)
        {
            cout << i;
            break;
        }
    }
}