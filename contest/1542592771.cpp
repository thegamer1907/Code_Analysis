#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> v;
    for(int i = 0; i < n; i++){
        string s1;
        cin >> s1;
        v.push_back(s1);
    }
    bool ans = false;
    for(int i = 0; i < n; i++){
        if(s[0]==v[i][0]&&s[1]==v[i][1]) ans = true;
        for (int j = 0; j < n; j++){
            if(s[1]==v[j][0] && s[0] == v[i][1]) ans = true;
        }
    }
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
