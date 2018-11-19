#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> vec(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vec[i];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            string S = vec[i] + vec[j], t = vec[j] + vec[i];
            if(S.find(s) != string::npos){
                cout << "YES\n";
                return 0;
            }
            if(t.find(s) != string::npos){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}