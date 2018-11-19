#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>
#include <set>
#include <map>
#include <string>

using namespace std;

int main(){
    string passwd; cin >> passwd;
    int n; cin >> n;
    string s[111];
    int ok1 = 0, ok2 = 0;
    for(int i = 1; i <= n; ++i){
        cin >> s[i];
        if(s[i][1] == passwd[0]) ok1 = 1;
        if(s[i][0] == passwd[1]) ok2 = 1;
    }
    if(!ok1 || !ok2)
    for(int i = 1; i <= n; ++i){
        if(s[i] == passwd) ok1 = 1, ok2 = 1;
    }
    if(ok1 && ok2) printf("YES\n");
    else printf("NO\n");
    return 0;
}
