#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int initial = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        initial += a[i];
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int zeroes = 0, ones = 0;
            for (int k = i; k <= j; k++)
            {
                if (a[k] == 0) zeroes++;
                else ones++;
            }
            ans = max(ans, initial + zeroes - ones);
        }
    }
    cout << ans << endl;
    
    return 0;
}