#include<bits/stdc++.h>

using namespace std;

long long a[30010], n, i, q, t;

int main()
{
    cin >> n >> t;
    for(i = 1;i < n;i++)
        cin >> a[i];
    i = 1;
    while(i < n)
    {
        i = i + a[i];
        if(i == t)
            q = 1;
    }
    if(q == 1)
        cout << "YES";
    else
        cout << "NO";
}
