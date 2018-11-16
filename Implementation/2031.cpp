#include <iostream>

using namespace std;

int main()
{
    int p[100][3], n, i, j, sum1 = 0, sum2 = 0, sum3 = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 3; j++)
            cin >> p[i][j];
    }
    for(i = 0; i < n; i++)
    {
        sum1 += p[i][0];
        sum2 += p[i][1];
        sum3 += p[i][2];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
