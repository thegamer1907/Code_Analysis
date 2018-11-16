#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    bool ar[n];
    for(int i = 0; i < n; ++i) cin >> ar[i];
    int localMax = 0;
    int globalMax = ar[0];
    int tempStart = 0;
    int start = 0, end = 0;
    for(int i = 0; i < n; ++i) {
        localMax += ar[i] ? -1 : 1;
        if(localMax >= globalMax) {
            globalMax = localMax;
            start = tempStart;
            end = i;
        } else if(localMax < 0) {
            localMax = 0;
            tempStart = i + 1;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i)
        cnt += (i >= start && i <= end) ? !ar[i] : ar[i];
    cout << cnt << endl;
}
