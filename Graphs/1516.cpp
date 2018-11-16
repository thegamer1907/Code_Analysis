#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n-1];

    for(int i = 0; i < n - 1; i++)
        cin >> arr[i];

    int curr;
    for(curr = 0; curr < n - 1; )
    {
        if(curr + 1 == t)
        {
            cout << "YES";
            return 0;
        }

        curr += arr[curr];
    }

    if(curr + 1 == t)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
