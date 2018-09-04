#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long int k, l = 1, r;
    cin >> n >> k;
    r = 1;
    for (int i = 0; i < n; i++) r *= 2;
    r--;
    int s = -1;
    while (l <= r)
    {
        unsigned long long int mid = (l + r) / 2;
        if (mid > k) r = mid - 1;
        else if (mid < k) l = mid + 1;
        else l = r + 1;
        s++;
    }
    cout << n - s;
    return(0);
}