#include <iostream>
#include <string>
using namespace std;
string pass, str;
int n;
bool eq, f, s;
int main(){
    eq == f == s == false;
    cin >> pass >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == pass || (str[1] == pass[0] && str[0] == pass[1])) eq = true;
        if(str[1] == pass[0]) f = true;
        if(str[0] == pass[1]) s = true;
    }
    if(eq || (f && s)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}