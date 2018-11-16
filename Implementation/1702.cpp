#include <iostream>

using namespace std;

int main() {
    string in;
    cin >> in;

    char prev = in[0];
    int count = 0;
    for (int i = 1; i < in.length(); ++i) {
        if (prev == in[i]) {
            ++count;
        }
        else {
            count = 0;
        }

        // 6 because first one will be counted on second same char
        if (count >= 6) {
            cout << "YES";
            return 0;
        }

        prev = in[i];
    }

    cout << "NO";

    return 0;
}
