#include <iostream>
#include <string>

using namespace std;

int main (){
    string a;
    cin >> a;
    char prev = a[0];
    int c = 1;
    bool fl = false;
    for (int i = 1; i < a.size(); i++){
        if (a[i] == prev){
            c += 1;
        } else {
            c = 1;
            prev = a[i];
        }
        if (c == 7){
            fl = true;
            break;
        }
    }
    if (fl){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}