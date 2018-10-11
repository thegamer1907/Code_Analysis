#include <cstdio>
#include <iostream>
#include <cmath>
#include <limits.h>
#include <algorithm>
#include <functional>
#include <set>
#define ll long long int

using namespace std;

set<string> common_words;
string poland_words[1005];
string enemy_words[1005];
int n, m;

int main(){
    cin >> n >> m;
    int poland_count = 0;
    int enemy_count = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> poland_words[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> enemy_words[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(poland_words[i] == enemy_words[j]) {
                common_words.insert(poland_words[i]);
            }
        }
    }
    
    
    for(int i = 0; i < common_words.size(); i++) {
        if(i % 2 == 0) {
            poland_count++;
            m--;
        } else {
            enemy_count++;
            n--;
        }
    }
    
    if(n > m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}