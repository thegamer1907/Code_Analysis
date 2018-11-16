#include <iostream>

using namespace std;

int d[300][300];

int step(int n)
{
    int i = 0;
    while(n)
        i++, n /= 2;
    return i;
}
int main()
{
    string s;
    int a, b, n, f, ans;

    cin >> n >> a >> b;
    f = step(n);
    for(int i = 0; i < 256; i++)
        d[i][0] = i + 1;
    int k = 1;
    int j = 0;
    while(1)
    {
        bool bo = 0;
        for(int i = 0; i < n; i += k * 2)
            if((d[i][j] == a && d[i + k][j] == b) || (d[i][j] == b && d[i + k][j] == a))
                {
                    ans = j + 1;
                    bo = 1;
                    break;
                }
            else if(d[i][j] == b || d[i + k][j] == b)
                d[i][j + 1] = b;
            else if(d[i][j] == a || d[i + k][j] == a)
                d[i][j + 1] = a;
            else
                d[i][j + 1] = d[i][j];
        j++;
        k *= 2;
        if(bo)
            if(ans == f - 1)
                return cout << "Final!", 0;
            else
                return cout << ans, 0;
    }
    return 0;
}
