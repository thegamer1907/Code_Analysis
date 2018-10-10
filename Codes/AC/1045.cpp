#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    
    string s;
    
    int n, k; cin >> n >> k >> s;

    int a = 0, b = a, st = b, ans = st;
  
    for(int i = 0; i < n; ++i){
        s[i] == 'a' ? a++ : b++;
        if(min(a, b) > k){
            s[st++] == 'a' ? --a : --b;
        }
        ans = max(ans, a + b);
    }

    cout << ans << endl;
    
    return 0;
}