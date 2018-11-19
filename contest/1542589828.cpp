#include <bits/stdc++.h>
using namespace std;
vector<string> ve;
int main(){
    string passwd, s;
    int n;
    cin >> passwd >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        ve.push_back(s);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string str = ve[i] + ve[j];
            if(str.find(passwd) != string::npos) return 0*puts("YES");
        }
    }
    puts("NO");
    return 0;
}