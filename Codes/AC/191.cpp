#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int arr[n + 5];
    arr[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    int m;
    cin >> m;
    while(m--)
    {
        int s, l = 1, h = n, mid;
        cin >> s;
        while(l <= h)
        {
            mid = (l + h) / 2;
            if(s <= arr[mid] && s > arr[mid - 1])
            {
                cout << mid << '\n';
                break;
            }
            else if(s < arr[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
    return 0;
}
