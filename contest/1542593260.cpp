#include <iostream>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;
const int N = 3e5 + 10;
const int inf = 1e9 + 5;
const int mod = 1e9 + 7;
typedef long long ll;
int n;
string s[N];
string t;
int main(){
    cin >> t;
    cin >> n;
    for(int i = 0; i < n; ++ i){
        cin >> s[i];
    }
    int flag = 0;
    for(int i = 0; i < n; ++ i){
        if(s[i] == t) flag = 1;
        for(int j = 0; j < n; ++ j){
            string tmp = s[i] + s[j];
            if(tmp.substr(1, 2) == t)
                flag = 1;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
