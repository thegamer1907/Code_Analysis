#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>
#include <sstream>
using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    string s; cin >> s;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < s.size() - 1; j++)
            if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
    }

    cout << s;
    return 0;
}
