#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int A[2];

int main(){
    string sub, str;
    cin >> sub;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> str;
        if ((str[0] == sub [0] && str[1] == sub [1]) || (str[1] == sub[0] && str[0] == sub[1])){
            cout << "YES" << endl;
            return 0;
        } else {
            if (sub[1] == str[0]){
                A[1]++;
            }
            if (sub[0] == str[1]){
                A[0]++;
            }
        }
    }
    if (A[0] && A[1]){
        cout << "YES";
    } else {
        cout << "NO" << endl;
    }
}


