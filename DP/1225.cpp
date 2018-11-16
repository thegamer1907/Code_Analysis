#include <iostream>

using namespace std;
const int inf = 1e9;

int main()
{
    int n , ans = -1 * inf;
    cin >> n;
    bool A[n];
    int sum[n] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i];
        if(i == 0)
        {
            sum[0] = A[0];
            continue;
        }
        sum[i] = A[i] + sum[i - 1];
    }
    for(int i = 0 ; i < n ; i++)
        if(!A[i])
        {
            int a = 0 , b = 0;
            for(int j = i ; j < n ; j++)
            {
                if(A[j])
                    b++;
                else
                {
                    a++;
                    ans = max(ans , j - i + 1 - b + sum[i] - A[i] + sum[n - 1] - sum[j]);
                }
            }

        }
    if(ans == -1 * inf)
        cout << n - 1;
    else
        cout << ans;
    return 0;
}
