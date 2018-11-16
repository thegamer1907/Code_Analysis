#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b, counter;
    cin >> n >> a >> b;
    a--;
    b--;
    counter = 0;
    while(a != b) {
        a /= 2;
        b /= 2;
        counter++;
    }
    if ((1 << counter) == n) {
        cout << "Final!\n";
    }
    else {
        cout << counter << '\n';
    }
    return 0;
}

