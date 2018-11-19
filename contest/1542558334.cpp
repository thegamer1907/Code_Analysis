#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <ctime>
using namespace std;

const int maxn = 210;

int N;
string S[maxn];
string target;

int main() {
    cin >> target;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> S[i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            string tmp = S[i] + S[j];
            size_t found = tmp.find(target);
            if (found != std::string::npos) {
                cout << "YES" << endl;
                return 0;
            }
        }
    cout << "NO" << endl;
}
