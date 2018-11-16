#include <bits/stdc++.h>

using namespace std;

int main() 
{
    cout.precision(20); cout.tie(0); cin.tie(0);
    ios_base::sync_with_stdio(0);
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    while(a > 0 && b > 0 && (a > 1 || b > 1))
    {
        if(a > b) a -= 2, b++;
        else a++, b -= 2;
        cnt++;
    }
    cout << cnt;
}