#include <bits/stdc++.h>

using namespace std;

int w,k,n;

int main()
{
    ios::sync_with_stdio(0);

    cin >> k>>n>>w;

    cout << max(0,(w*(w+1)*k/2)-n);

    return 0;
}
