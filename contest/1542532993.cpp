#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
        
    bool flast = 0, lfirst = 0, isSame = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[1] == pass[0])
            flast = 1;
        if (s[0] == pass[1])
            lfirst = 1;
            
        if (s == pass)
            isSame = 1;
    }
    
    if ((flast && lfirst) || (isSame)) {
        cout << "YES" << endl;
        return 0;
    }
    
    cout << "NO" << endl;
    return 0;
    
}
