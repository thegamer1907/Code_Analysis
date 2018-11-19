#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t1, t2;
    int b[3];
    cin >> b[0] >> b[1] >> b[2] >> t1 >> t2;
    b[0] *= 5;
    b[0] %= 60;
    b[0] *= 2;
    b[1] *= 2;
    b[2] *= 2;
    if (b[2] > 0) b[1]++;
    if (b[1] > 0) b[0]++;
    sort(b, b+3);

    t1 *= 10;
    t2 *= 10;

    int z1, z2;

    if (t1 < b[0]) z1 = 1;
    else if (t1 < b[1]) z1 = 2;
    else if (t1 < b[2]) z1 = 3;
    else z1 = 1;

    if (t2 < b[0]) z2 = 1;
    else if (t2 < b[1]) z2 = 2;
    else if (t2 < b[2]) z2 = 3;
    else z2 = 1;

    //cout << b[0] << " " << b[1] << " " << b[2] << endl;
    //cout << z1 << " " << z2 << endl;

    if (z1 == z2) cout << "YES";
    else cout << "NO";

    return 0;
}