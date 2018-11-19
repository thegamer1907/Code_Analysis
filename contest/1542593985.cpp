#include <bits/stdc++.h>
using namespace std;
int n;
string st[105],s;
int main(){
    cin>>s>>n;
    for(int i=0;i<n;++i){
        cin>>st[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            string t = st[i] + st[j];
            for(int k=0;k<3;++k){
                if(t[k]==s[0]&&t[k+1]==s[1]){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}