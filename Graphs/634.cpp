#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;


int main() {
    int n = 0, t = 0;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++) {
        string s1{s};
        for (int j = 1; j < s1.size(); j++)
            if (s1[j] == 'G' && s1[j - 1] == 'B')
                swap(s[j], s[j - 1]);
    }
    cout << s;
    return 0;
}