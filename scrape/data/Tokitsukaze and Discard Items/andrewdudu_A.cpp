#include<bits/stdc++.h>
using namespace std;
long long int cnt = 0;
int main() {
    long long int n, q;
    long long int splitBefore;
    cin >> n >> q >> splitBefore;
    long long int arr[q];
    for (int i=0;i<q;i++) {
        cin >> arr[i];
    }

    int tempCnt = 0;
    int operate = 0;
    bool lewat = false;
    long long split = splitBefore;
    for (int i=0;i<q;i++) {
        // cout << operate << ' ' << i << ' ' << split << endl;
        if (arr[i]-cnt <= split) {
            lewat = true;
            tempCnt++;
        } else {
            if (lewat) operate++;
            lewat = false;
            cnt = tempCnt;
            // cout << operate << ' ' << cnt << endl;
            if (arr[i]-cnt <= split) {
                tempCnt++;
                lewat = true;
                continue;
            }
            // while (arr[i]-cnt > split) {
            //     split += splitBefore;
            // }
            if (arr[i]-cnt > split) split = ((arr[i]-cnt )/splitBefore + int(((arr[i]-cnt) % splitBefore) != 0)) * splitBefore;
            tempCnt++;
            lewat = true;
        }
    }

    if (lewat) operate++;

    cout << operate << endl;
}