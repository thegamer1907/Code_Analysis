#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>
using namespace std;

int main()
{
    string s; cin >> s;

    int count_1 = 0, count_0 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            count_1++;
            count_0 = 0;
        }
        else {
            count_0++;
            count_1 = 0;
        }

        if (count_1 == 7 || count_0 == 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
