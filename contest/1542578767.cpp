#include <bits/stdc++.h>

using namespace std;
string s,s2[101];
int n,ans,ans2;
int main(){
    cin >> s;
    cin >> n;
    for(int i = 1; i<= n ; i++){
      cin >> s2[i];
      if(s == s2[i]){
        cout << "YES";
        return 0;
      }
      if(s2[i][1] == s[0]){
        ans = 1;
      }
      if(s2[i][0] == s[1]){
        ans2 = 1;
      }
    }
    if(ans == 1 && ans2 == 1){
      cout << "YES";
    }
    else{
      cout << "NO";
    }
    return 0;
}
