#include <iostream>
using namespace std;
const int N = 1e5 + 10;
typedef long long ll;
ll n, m, k, a[N], cnt, sum, num;
int main()
{
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 1; i <= m; i++)
        scanf("%lld", &a[i]);
    cnt = 1;
    while (cnt <= m)
    {
        ll lim = (a[cnt] - sum - 1) / k * k + k;
        //lim *= 5;
        //cout << lim << endl;
        while (cnt <= m && a[cnt] - sum <= lim)
        {
            ll last = sum;
            while (cnt <= m && a[cnt] - last <= lim)
                sum++, cnt++;
            if (sum > 0)
                num++;
            if (cnt == m + 1)
            {
                cout << num << endl;
                return 0;
            }
        }
        if (cnt == m + 1)
        {
            cout << num << endl;
            return 0;
        }
    }
    cout << num << endl;
}