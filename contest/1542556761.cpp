#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
    int n;
    int x[2] = {0, 0};
    bool aux = 0;

    cin >> a >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cin >> b;

        if(a == b || (b[0] == a[1] && b[1] == a[0])) {
            cout << "YES" << endl;
            aux = 1;
            break;
        } else if(b[0] == a[1]) x[1] = 1;
        else if(b[1] == a[0]) x[0] = 1;
    }

    if(!aux) {
        if(x[0] && x[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

// 1509242868878
