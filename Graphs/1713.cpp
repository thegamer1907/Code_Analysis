// io functions
#include <iostream>
#include <cmath>
// this include for setting precision of io
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    vector<vector<int>> v(n, vector<int>());

    for (int i = 0; i < n - 1; ++i){
        int offset;
        cin >> offset;
        v[i].push_back(i+offset);
    }

    bool b = false;
    int index = 0;
    while (index < t){
        if (index+1 == t){
            b = true;
            break;
        } else {
            index = v[index][0];
        }
    }
    if (b){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

}