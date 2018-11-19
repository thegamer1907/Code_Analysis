#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool b1=false, b2=false, b3=false;
    string o;
    cin >> o;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s == o){
            b3 = true;
        }
        if(o[1] == s[0]) b1 = true;
        if(o[0] == s[1]) b2 = true;
        if(b1 && b2){
            b3 = true;
        }
    }
    b3 ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
