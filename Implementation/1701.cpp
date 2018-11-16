#include <iostream>

using namespace std;

int main() {
    string in;
    cin >> in;

    if (in.find("0000000") != string::npos ||
        in.find("1111111") != string::npos) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
