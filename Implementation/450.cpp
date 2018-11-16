#include <iostream>

using namespace std;

int main()
{
    int b,n,k;
    cin >> n >> k;
       k = k - 1;
    b = 0;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if ((a[i] > a[k])  && (a[i] > 0) || (a[i] == a[k]) && (a[i] > 0)) {
            b++;
        }
    }
    cout << b << endl;
    return 0;
}
