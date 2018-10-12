//
// Created by Tanmesh on 10/07/18.
//

#include <iostream>
#include <set>
#include <bits/stdc++.h>

using namespace std;

#define mp  make_pair
#define f   first
#define sc  second
#define pb  push_back
#define ll  long long

typedef pair<ll, ll> pp;

const int MAXN = (int) 2e5 + 7;

int main() {
    int n, m;
    cin >> n >> m;
    set<string> s;
    for(int i=0; i<n; ++i) {
        string str;
        cin >> str;
        s.insert(str);
    }
    int common = 0;
    for(int i=0; i<m; ++i) {
        string str;
        cin >> str;
        if(s.find(str) != s.end()) {
            ++common;
        }
        else{
            s.insert(str);
        }
    }
    n -= common, m -= common;
    if(common%2 != 0) {
        ++n;
    }
    if(n>m) {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}