#include <iostream>
#define llong long long

using namespace std;

llong n, k, a[1001], cnt = 0;

int main ()
{
    cin >> n >> k;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i ++)
    {
        if (a[i] >= a[k - 1] && a[i] != 0)
        {
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}
/// erzhan katala ((((((())))))))