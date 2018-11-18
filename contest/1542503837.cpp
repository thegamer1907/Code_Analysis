#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string p[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++){
        if(p[i][1] == s[0] && p[i][0] == s[1]){
          cout << "YES" << endl;
          return 0;
        }
        if(p[i][0] == s[0] && p[i][1] == s[1]){
            cout << "YES" << endl;
            return 0;
        }
        for(int j = i+1; j < n; j++){
            if(p[i][1] == s[0] && p[j][0] == s[1]){
                cout << "YES" << endl;
                return 0;
            }
            if(p[j][1] == s[0] && p[i][0] == s[1]){
              cout << "YES" << endl;
              return 0;
            }

        }

    }
    cout << "NO" << endl;
}
