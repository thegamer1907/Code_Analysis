#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(arr, arr + n);
        int cnt = 0;
        int j = n/2;
        int i = 0;
        while (j < n)
        {
            if (2 * arr[i] <= arr[j])
            {
                cnt++;
                arr[j] = 1e6;
                i++;
            }
            j++;
        }
        cout << n - cnt;
        return 0;
}

