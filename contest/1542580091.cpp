#include <cstdio>
#include <iostream>
#include <unordered_set>

using namespace std;

bool zero_string(string ss){
    for (int i = 0; i < ss.length(); i++){
        if (ss[i] == '1') return false;
    }
    return true;
}

bool well_match(string s1, string s2){
    for (int i = 0; i < s1.length(); i ++){
        if (s1[i] == '1' && s2[i] == '1') return false;
    }
    return true;
}

bool available(unordered_set<string> sz){
    if (sz.size() == 0) return false;
    for (unordered_set<string>::iterator it = sz.begin(); it != sz.end(); it++){
        if (zero_string(*it)) return true;
    }
    for (unordered_set<string>::iterator it = sz.begin(); it != sz.end(); it++){
        for (unordered_set<string>::iterator it2 = it; it2 != sz.end(); it2++){
            if (well_match(*it, *it2)) return true;
        }
    }

    return false;
}

int main(){
    unordered_set<string> sz;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i ++){
        string ss;
        for (int j = 0; j < k; j ++){
            char ch;
            cin >> ch;
            ss += ch;
        }
        sz.insert(ss);
    }
    //for (unordered_set<string>::iterator it = sz.begin(); it != sz.end(); it ++) cout << *it << endl;
    if (available(sz)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
