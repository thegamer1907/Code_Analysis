#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, t, Count = 0;
    string s, a;

    cin >> n >> t;
    cin >> s;
    a = s;
    while(Count < t){
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'B' && s[i + 1] == 'G'){
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
        Count++;
    }
    cout << s;

    return 0;
}
