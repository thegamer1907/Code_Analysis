#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int num[n];
    for (int i =0; i < n; i++) {
        cin >> num[i];
    }

    int maxNum = *max_element(num, num + n) + m;

    int count = 0, maxElement = *max_element(num, num + n);
    for (int i = 0; i < n; i++) {
        count += maxElement - num[i];
    }

    int minNum;
    if (m - count <= 0) {
        minNum = maxElement;
    }
    else {
        minNum = maxElement + (m - count) / n + (((m - count) % n == 0) ? 0 : 1) ;
    }

    cout << minNum << " " << maxNum;

    return 0;
}
