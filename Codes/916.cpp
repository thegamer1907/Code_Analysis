#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    string s;
    cin >> n >> k >> s;
    int max1= 0, i= 0, j= 0, cur= 0;
    while (j < s.size()){
        while (j < s.size() && cur < k){
            if (s[j] == 'b'){
                cur++;
            }
            j++;
        }
        while (j < s.size() && s[j] == 'a'){
            j++;
        }
        max1= max(max1, j - i);
        if (s[i] == 'b' && cur > 0){
            cur--;
        }
        i++;
        if (i > j){
            j= i;
        }
    }
    i= j= cur= 0;
    while (j < s.size()){
        while (j < s.size() && cur < k){
            if (s[j] == 'a'){
                cur++;
            }
            j++;
        }
        while (j < s.size() && s[j] == 'b'){
            j++;
        }
        max1= max(max1, j - i);
        if (s[i] == 'a' && cur > 0){
            cur--;
        }
        i++;
        if (i > j){
            j= i;
        }
    }
    cout << max1;
    return 0;
}
