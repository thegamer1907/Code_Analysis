#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
using namespace std;

int main () {
    string pass;
    int k;
    cin >> pass >> k;
    string cur;
    string f = "", s = "";
    for (int i = 0; i < k; i++) {
        cin >> cur;
        if (cur == pass) {
            cout << "YES";
            return 0;
        }
        if (cur[0] == pass[1])
            s = cur[0];
        if (cur[1] == pass[0])
            f = cur[1];
        if (f != "" && s != "") {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}