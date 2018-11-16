#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sortarr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sortarr[arr[i]-1] = i+1;

    }

    for(int i = 0; i < n; i++)
    {
        cout << sortarr[i] << ' ';
    }

    return 0;
}

