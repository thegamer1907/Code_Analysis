#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 4;
int n;
string s[N];
int main(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> s[i];
    for(int i = n - 2 ; i >= 0 ; i--){
        if(s[i] > s[i + 1]){
            string ss = "";
            int j = 0;
            while(s[i][j] == s[i + 1][j]){
                ss += s[i][j];
                j++;
            }
        s[i] = ss;
        }
    }
    for(int i = 0 ; i < n ; i++)
        cout<<s[i]<<"\n";
    return 0;
}