#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int t;
    cin >> t;
    int flag = 0;
    string a[101];
    for(int j = 0; j < t; j++)
        cin >> a[j];
    for(int j = 0; j < t; j++){
        if(a[j] == s){
            flag = 1;
            break;
        }
        for(int k = 0; k < t && !flag; k++){
            // if(k == j) continue;
            string tmp;
            tmp.push_back(a[j][1]);
            tmp.push_back(a[k][0]);
            if(tmp == s){
                flag = 1;
                break;
            }
        }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
