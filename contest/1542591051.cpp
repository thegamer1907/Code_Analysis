#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <fstream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string a, password, ans = "NO";
    vector<string> words;
    int n;
    cin >> password>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        words.push_back(a);
    }
    for(int i = 0; i < words.size(); i++){
        for(int j = 0; j < (int)words.size(); j++){
            string a = words[i];
            string b = words[j];
            if (a == password || b == password){
                ans = "YES";
            } else if (a[1] == password[0] && b[0] == password[1]){
                ans = "YES";
            }
        }
    }
    cout<<ans;
    return 0;
}
