#include <iostream>
using namespace std;
string str;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> str;
    for(int i = 0 ;i <str.length() ;i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}