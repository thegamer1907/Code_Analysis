#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n+7];
    for(int i=0; i<n; ++i) {
        cin>>s[i];
    }
    for(int i=n-1; i>0; --i) {
        int cnt =1;
        for(int j=1; j<s[i].size(); ++j) {
            if(j<s[i-1].size()) {
                if(s[i][j] == s[i-1][j]) cnt++;
                if(s[i][j] < s[i-1][j]) {
                    s[i-1] = s[i-1].substr(0 , j);
                    break;
                }
                else if(s[i][j]>s[i-1][j]) break;
            }
        }
        if(cnt == s[i].size())
            s[i-1] = s[i];
    }
    for(int i=0; i<n; ++i){
        cout<<s[i]<<"\n";
    }
}