#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0, n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    if ( arr[k-1] == 0)
    {
        for ( int i = k-1; i >= 0; i--)
            if ( arr[i] != 0 ) counter++;
    }
    else
    {
        int kthvalue = arr[k-1]; counter = k;
        for ( int i = k; i < n; i++)
            if ( arr[i] == kthvalue ) counter++;
    }

    cout << counter;
    return 0;
}
