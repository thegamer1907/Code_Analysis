//
//  main.cpp
//  Codeforces Round #438 (Div. 1 + Div. 2) - A. Bark to Unlock
//
//  Created by S M HEMEL on 21/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string str,s;
int main() {
    bool f = true,f1 = true;
    cin >> str;
    int n,c1=0;
    cin >> n;
    while(n--) {
        cin >> s;
        if(str==s) return 0 * puts("YES");
        if(str[0]==s[1] && f){
            c1++;
            f = false;
        }
        if(str[1]==s[0] && f1) {
            c1++;
            f1 = false;
        }
    }
    if(c1>1) puts("YES");
    else puts("NO");
    return 0;
}
