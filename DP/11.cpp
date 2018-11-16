#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n];
    for (int i=0 ; i<n ; i++) cin >> a[i];

    int m;
    cin >> m;

    int b[m];
    for (int i=0 ; i<m ; i++) cin >> b[i];

    sort(a,a+n);
    sort(b,b+m);


    int pairs=0;

    // for (int i=0 ; i<m ; i++) cout << "b[" << i << "] is " << b[i] << endl;

    for (int i=0 ; i<n ; i++) {
        for (int j=0 ; j<m ; j++) {
            if (abs(a[i]-b[j])<=1) {
                b[j]=102;
                pairs++;
                // cout << "Here a[i] is " << a[i] << " and b[j] is " << b[j] << endl;
                break;
            }
        }
    }

    cout << pairs << endl;
}
