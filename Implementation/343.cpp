#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pass = arr[k-1];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= pass && arr[i] > 0)
            counter++;
    }
    cout << counter;
    return 0;
}