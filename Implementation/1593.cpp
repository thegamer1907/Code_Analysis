#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int dem=1;
    for (int i=0;i<s.length();i++){
         if (s[i]==s[i-1]){
            dem++;
         } else dem=1;
         if (dem==7){ cout << "YES";return 0;}
    }
    cout << "NO";

}