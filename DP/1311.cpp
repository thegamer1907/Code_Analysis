#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int one=0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        one += a[i];
        if(a[i] == 1)
            a[i] = -1;
        else
            a[i] = 1;
    }
    int local = 0, global = INT_MIN;
    for(int i = 1; i <= n; i++)
    {
        local = max(local+a[i], a[i]);
        global = max(global, local);
    }
    if(global == INT_MIN)
        global = 0;
    cout << global+one;
    return 0;
}