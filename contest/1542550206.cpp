//
//  main.cpp
//  codeforces
//
//  Created by pentaz.
//  Copyright © 2017 pentaz. All rights reserved.
//
//  pentaz
//

#include<string>
#include<cstring>
#include<cstdio>
#include<queue>
#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<pair<char, char>> vs;
    pair<char, char> p;
    string x;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == s) flag = true;
        p.first = x[0];
        p.second = x[1];
        vs.push_back(p);
        for(int j = i; j >= 0; j--){
            if((vs[i].first == s[1] && vs[j].second == s[0]) ||
               (vs[i].second == s[0] && vs[j].first == s[1])){
                flag = true;
                break;
            }
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}









