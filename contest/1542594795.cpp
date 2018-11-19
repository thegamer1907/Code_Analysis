#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    bool can = false;
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> li;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        if(s==str){
            can = true;
        }
        li.push_back(str);
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(li[i][1]==s[0] && li[j][0]==s[1]){
                can = true;
            }
        }
    }
    if(can){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}