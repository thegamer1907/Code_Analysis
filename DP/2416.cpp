#include <iostream>
#include <string.h>
using namespace std;

#define MAX 150005

int main() {
    int n, k, s, a[MAX];
    cin >> n >> k;
    for (int i=0; i<k; i++) {
        cin >> a[i];
        s += a[i];
    }
    int mindiff = s, index = 0;
    for (int i=k; i<n; i++) {
        cin >> a[i];
        s += a[i];
        s -= a[i-k];
        if (s < mindiff) {
            mindiff = s;
            index = i-k+1;
        }
    }

    cout << index+1 << endl;

    return 0;
}
