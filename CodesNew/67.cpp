#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, l, r, m;
    cin >> n;
    int arr[n];
    cin >> l;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);

    m = max(arr[0], l - arr[n - 1]);
    r = m * 2;

    for (int i = 0; i < n - 1; i++){
        r = max(r, arr[i + 1] - arr[i]);
    }

    cout.precision(10);
    cout << fixed << r / 2.0 << endl;
    return 0;
}

// 1538784405698
