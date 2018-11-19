#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, c = 0, v = 0, d = 0;
    string word, str, current, a = "", b = "";
    cin >> word;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str;
        if (str[0] == word[1]){
            v++;
        }
        if (str[1] == word[0]){
            d++;
        }
        if (str == word){
            c++;
        }
        current += str;
    }

    if (c > 0 || (v > 0 && d > 0)){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}