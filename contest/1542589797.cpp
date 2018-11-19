#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string solve(vector<string> words, string password) {
  
    for (int i = 0; i < words.size(); i++) {
        if (words[i] == password) {
            return "YES";
        }
        
        for (int j = 0; j < words.size(); j++) {
            string concatString = "";
            concatString += words[i][words[i].length() - 1];
            concatString += words[j][0];
            
            if (concatString == password) {
                return "YES";
            }
        }
    }
    
    return "NO";
}

int main()
{
    string password;
    cin >> password;
    
    int n;
    cin >> n;
    
    vector<string> words(n);
    
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    cout << solve(words, password) << endl;
    
    return 0;
}
