#include <iostream>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int n, l;
    cin >> n >> l;
    int a[n+n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    int rez = 2*max(a[0], l-a[n-1]);
    for (int i = 0; i < n-1; i++)
        rez = max(rez, a[i+1]-a[i]);

    cout << setprecision(10);
    cout << (double)rez/2;
    return 0;
}
