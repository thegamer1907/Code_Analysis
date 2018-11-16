#include <bits/stdc++.h>

using namespace std;

long long k, n, w;
int main()
{
    cin >> k >> n >> w;
    int s = 0;
    for(int i = 1; i <= w; i++) {s += k * i;}
    if (s <= n) cout << "0";
    else {n = s - n; cout << n;}

}
