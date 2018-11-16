#include <bits/stdc++.h>

using namespace std;

int main() {

    int cells, finish_cell;
    cin >> cells >> finish_cell;
    int portals[cells];
    for(int i = 1; i < cells; i++) cin >> portals[i];
    int start = 1;
    while(start <= cells) {
        if(start == finish_cell) {
            cout << "YES";
            return 0;
        }
        start += portals[start];
    }
    cout << "NO";

    return 0;
}
