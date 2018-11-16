#include <bits/stdc++.h>
using namespace std;
int check (string s, int i, int j){
    int t = 0;
    for (int k = 0; k < s.length(); k++){
        if ((k < i) || (k > j)){
            if (s[k] == '1')
                t ++;
        }
        else{
            if (s[k] == '0')
                t++;
        }
    }
    return t;
}
int main(){
    int n, c = 0;
    cin >> n;
    int b[n];
    string s = "";
    for (int i = 0; i < n; i++){
        cin >> b[i];
        s += '0' + b[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if (check(s, j, i) > c){
                c = check(s, j, i);
            }
            if (check(s, j, i) == n){
                cout << n;
                return 0;
            }
        }
    }
    cout << c;
}