#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort (arr, arr + n);
    int half = n / 2;
    int i = half - 1;
    int j = n - 1;
    int tot = 0;
    while (i >= 0 and j >= half) {
        if (arr[i] * 2 <= arr[j]) {
            tot++;
            i--;
            j--;
        }
        else
            i--;
    }
    cout << n - tot << endl;
//    main();
}