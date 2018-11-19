#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    bool find[2] = {false,false};
    string s;
    cin >> s;
    cin >> n;
    string aux;
    while(n-->0){
        cin >> aux;
        if(aux == s){
            cout << "YES\n";
            return 0;
        }
        if(aux[1] == s[0]) find[0] = true;
        if(aux[0] == s[1]) find[1] = true;
        if(find[0] && find[1]){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;

}