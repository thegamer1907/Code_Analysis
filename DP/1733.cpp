#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    size_t AB = s.find("AB"), BA;

    if(AB != string::npos){
        s.replace(AB, 2, "xx");

        BA = s.find("BA");
        if(BA != string::npos){ cout << "YES\n"; return 0;}
        else s.replace(AB, 2, "AB");

    }

    //cout << s << endl;

    BA = s.find("BA");
    if(BA != string::npos){
        s.replace(BA, 2, "xx");

        AB = s.find("AB");
        if(AB != string::npos) cout << "YES\n";
        else cout << "NO\n";

    }
    else cout << "NO\n";

    return 0;
}
