#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e2+5;
int n, sum, num[maxn][3];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> num[i][j];
    for(int i = 0; i < 3; i++)
    {
        sum = 0;
        for(int j = 0; j < n; j++)
            sum += num[j][i];
        if(sum) {puts("NO"); return 0;}
    }
    puts("YES");
    return 0;
}
