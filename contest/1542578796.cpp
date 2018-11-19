#include <iostream>
#include <vector>
#include <algorithm>

#define loop(i, num)  for (int i = 0; i < num; i++)

using namespace std;

int n;

string password;

vector<string> words;

bool r1 = 0, r2 = 0;

int main() {
    
    cin >> password;
    
    cin >> n;
    
    words.resize(n);
    
    string word;
    
    loop (i, n) {
        
        cin >> word;
        
        if (word == password) {
            
            cout << "YES" << endl;
            
            return 0;
            
        }
        
        if (word[0] == password[1])  r1 = 1;
        
        if (word[1] == password[0])  r2 = 1;
        
    }
    
    if (r1 && r2) {
        
        cout << "YES" << endl;
        
    } else {
        
        cout << "NO" << endl;
        
    }
    
    return 0;
    
}
