#include <bits/stdc++.h>

using namespace std;

int main()
{
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    vector <string> words(n);
    for(int i = 0; i < n; i++)
        cin >> words[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                string s = words[i] + words[i] + words[j] + words[j];
                if(s.find(pass) != string::npos){
                    cout << "YES";
                    return 0;
                }
        }


    }
    cout << "NO";
    return 0;
}
