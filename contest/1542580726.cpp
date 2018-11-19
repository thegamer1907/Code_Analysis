#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <stdio.h>
#include <functional>

using namespace std;
vector<string> a;
int n;
bool f11, f12, f21, f22;

int main() {
    string pass;
    cin >> pass >> n;
    for (int i = 0; i < n; i++) {
        string b;
        cin >> b;
        if (pass[0] == b[1]) f21 = true;
        if (pass[1] == b[0]) f22 = true;
        if(pass == b) {
            f21 = true;
            f22 = true;
        }
    }

    if (f21 && f22)
        cout << "YES";
    else
        cout << "NO";
}