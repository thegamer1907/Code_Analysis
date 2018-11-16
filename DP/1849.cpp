#include <iostream>
using namespace std;

int ab, ba, abab;
string a;

int main() {
    cin >> a;
    for (int i = 0; i < a.length()-1; i++) {
        if (a[i] == 'A' && a[i+1] == 'B') {
            i++;
            if (i < a.length()-1 && a[i+1] == 'A') {
                abab++;
                i++;
            } else {
                ab++;
            }
        } else if (a[i] == 'B' && a[i+1] == 'A') {
            i++;
            if (i < a.length()-1 && a[i+1] == 'B') {
                abab++;
                i++;
            } else {
                ba++;
            }
        }
    }
    if ((ab && ba) || (ab && abab) || (ba && abab) || (abab-1>0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
