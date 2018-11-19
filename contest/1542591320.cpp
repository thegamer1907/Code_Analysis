#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    string s;
    cin >> s;
    cin >> n;
    string word[n];
    bool valid = 0;

    for(int i = 0; i < n; i++){
        cin >> word[i];
        if(word[i] == s)
            valid = 1;
    }

    for(int i = 0; i < n; i++)
        for(int j =0; j < n; j++)
            if(word[i][1] == s[0] && word[j][0] == s[1])
                valid = 1;
    puts(valid?"YES":"NO");
}
