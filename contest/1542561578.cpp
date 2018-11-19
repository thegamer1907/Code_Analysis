#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

int main() {
    string A[100], B;
    bool s = 0, e = 0;
    int n;
    cin >> B >> n;
    for(int i = 0; i < n; ++i){
        cin >> A[i];
        if(A[i] == B){
            cout << "YES";
            return 0;
        }
        if(A[i][1] == B[0])
            s = 1;
        if(A[i][0] == B[1])
            e = 1;
    }
    if(e && s)
        cout << "YES";
    else
        cout << "NO";
}