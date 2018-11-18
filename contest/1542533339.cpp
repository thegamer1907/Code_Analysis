#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;
int h, m, s, t1, t2, result = 0;

int main(){
    cin >> h >> m >> s >> t1 >> t2;
    h = (h * 5) % 60;
    t1 = (t1 * 5) % 60;
    t2 = (t2 * 5) % 60;
    if (t1 > t2) {
        int temp = t1;
        t1 = t2;
        t2 = temp;
    }
    if (h >= t1 && h < t2) {
        result++;
    }
    if (m >= t1 && m < t2) {
        result++;
    }
    if (s >= t1 && s < t2) {
        result++;
    }
    if (result % 3 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}