#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool ab = false, ba = false;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'A' && s[i-1] == 'B' && ba == false) {
            ba = true;
            i++;
        }
        else if (s[i] == 'B' && s[i-1] == 'A' && ab == false) {
            ab = true;
            i++;
        }
    }
    bool ab1 = false, ba1 = false;
    for (int i = s.size(); i > 0; i--) {
        if (s[i] == 'A' && s[i-1] == 'B' && ba1 == false) {
            ba1 = true;
            i--;
        }
        else if (s[i] == 'B' && s[i-1] == 'A' && ab1 == false) {
            ab1 = true;
            i--;
        }
    }

    if ((ab == true && ba == true) || (ab1 == true && ba1 == true)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
