#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> a(n);
    int coun = 0;
    for (i = 0; i < a.size(); i++) {
        cin >> a[i];
        if (a[i] != 0) coun++;
    }
    if (a[k - 1] != 0) {
            coun = 0;
        for (i = 0; i < a.size(); i++) {
            if ((a[k - 1] <= a[i]) && (a[k - 1] != 0)) {
                coun++;
            }
        }
        cout << coun;
    } else {
        cout << coun;
    }
    return 0;
}
