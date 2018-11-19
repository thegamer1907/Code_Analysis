#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n, f = 0;
    cin >> n;
    vector <string> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == s && f == 0){
            cout << "YES";
            f = 1;
        }
    }
    if (f == 1){
        return 0;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            string z = "", z1 = "";
            z += a[i][1];
            z += a[j][0];
            z1 += a[j][1];
            z1 += a[i][0];
            if (z == s || z1 == s){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
