#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]){
    vector<int> portals;
    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        portals.push_back(x);
    }
    int curcell = 1;
    while (curcell <= t) {
        curcell += portals[curcell-1];
        if (curcell == t) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
