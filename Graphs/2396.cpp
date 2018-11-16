#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int P[2005];
    for (int i = 1; i <= n; i++) cin >> P[i];
    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        int c = 1, h = i;
        while (P[h] != -1)
        {
            h = P[h];
            c++;
        }
        if (c > max) max = c;
    }
    cout << max;
    return(0);
}