#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, p;
    bool dal1=false, dal2=false;
    int n,i;
    cin >> s >> n;
    for (i=0; i<n; i++){
        cin >> p;
        if (s==p) {dal1=true; dal2=true;}
        if (p[1]==s[0]) dal1=true;
        if (p[0]==s[1]) dal2=true;
    }
    if (dal1 && dal2) cout << "YES";
        else cout << "NO";

    return 0;
}
