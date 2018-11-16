#include <iostream>
using namespace std;
/*
void sort(int *arr, int n)
{
    for(int k = n/2; k > 0; k /= 2)
    {
       for(int i = k; i < n; i++)
       {
           int j;
           int temp = arr[i];
           for(j = i; j >= k; j -= k)
           {
               if(temp < arr[j - k])
                   arr[j] = arr[j - k];
               else
                   break;
           }
           arr[j] = temp;
       }
    }
}

int abs(int a)
{
    return a > 0 ? a : -a;
}

int min(int a, int b)
{
    return a > b ? b : a;
}
*/

int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int dp[n];
    bool counts[100000] = {false};
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    dp[n-1] = 1;
    counts[a[n-1]-1] = true;
    for(int i = n - 2; i >= 0; i--)
    {
        if(counts[a[i]-1])
        {
            dp[i] = dp[i+1];
        }
        else
        {
            counts[a[i]-1] = true;
            dp[i] = dp[i+1] + 1;
        }
    }

    int request[m];
    for(int i = 0; i < m; i++)
        cin >> request[i];

    for(int i = 0; i < m; i++)
        cout << dp[request[i]-1] << '\n';

    return 0;
}
