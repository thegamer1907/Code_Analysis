#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

const int CMax = 100002;

int n, ats;
string S, A[CMax];

int main() {
    cin >> S;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (
                (A[i][0] == S[0] && A[i][1] == S[1]) ||
                (A[i][1] == S[0] && A[j][0] == S[1]) ||
                (A[j][1] == S[0] && A[i][0] == S[1]) ||
                (A[j][0] == S[0] && A[j][1] == S[1])
            ){
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
}

