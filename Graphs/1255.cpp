#include <bits/stdc++.h>
using namespace std;

const int maxn = 3e4+5;
int n, t, f;
int num[maxn];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> t;
    for(int i = 1; i < n; i++)
        cin >> num[i];
    int index = 1;
    while(index < n)
    {
        if(index == t)
        {
            f = 1;
            break;
        }
        index = index + num[index];
    }
    if(index == t)
        f = 1;
    if(f) puts("YES");
    else  puts("NO");
    return 0;
}
