#include <bits/stdc++.h>

using namespace std;

int main(){
    map <string , int > mp;
    string s;
    int i, k = 0, j, n, m;
    cin >> n >> m;
    for(i = 0; i < n; i++){
        cin >> s;
        mp[s]++;
    }
    for(i = 0; i < m; i++){
        cin >> s;
        if(mp[s]) k++;
    }
    if(k % 2 == 1){
        if(n >= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else{
        if(n > m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}