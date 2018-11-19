#include<iostream>

using namespace std;

string s, a[1000];
int n, f, se;

int main(){
    cin >> s;
    cin >> n;
    for(int i =1; i <= n; ++i){
        cin >> a[i];
        if(a[i] == s){
            cout << "YES";
            return 0;
        }
        if(a[i][0] == s[1])
            ++f;
        if(a[i][1] == s[0])
            ++se;
    }

    if(f > 0 && se > 0){
        cout << "YES";
        return 0;}
        cout << "NO";
        }
