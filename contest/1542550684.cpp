#include <iostream>
#include <stdio.h>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    int n;
    string s;
    cin >> s >> n;
    string ss[110];
    for(int i = 0 ; i < n  ; i++) {
        cin >> ss[i];
        if(ss[i] == s){
            cout << "YES";
            return 0;
        }
    }
    bool a = false;
    bool b = false;
    for(int i = 0 ; i < n ; i++){
        if(ss[i][0] == s[1]) a = true;
        if(ss[i][1] == s[0]) b = true;
    }
    if(a&&b) cout << "YES";
    else cout <<"NO";


}
