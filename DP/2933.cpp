#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, k;
    cin >> n >> k;
    if (k > 1){
        cout << "Yes" << endl;
        return 0;
    }
    int T [n];
    for (int i = 0; i < n; ++i)
        cin >> T [i];
    int p;
    cin >> p;
    for (int i = 0; i < n; ++i)
        if (T[i] == 0)
            T [i] = p;
    bool fl = false;
    for (int i = 1; i < n; ++i)
        if (T[i] <= T[i - 1])
        fl = true;
    cout << (fl ? "Yes" : "No") << endl;
}
