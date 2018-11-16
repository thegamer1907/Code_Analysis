#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n+1);
    for (int i=1; i <= n-1; i++)
        cin >> arr[i];

    int start = 1;
    int val = start + arr[start];
    bool flag = false;

    while (true) {
        if (val == k) {
            flag = true;
            break;
        }
        else if(val > k)
            break;
        val += arr[val];
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}
