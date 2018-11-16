#include <iostream>
#include <vector>
#include <string>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int f(string & s) {
    switch (s[0]) {
        case 'T': return 4;
        case 'C': return 6;
        case 'O': return 8;
        case 'D': return 12;
        case 'I': return 20;
    }
    
    return 0;
}

int main() {
    int answer = 0;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        
        answer += f(s);
    }
    
    cout << answer << endl;
    
    return 0;
}