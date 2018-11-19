#include <bits/stdc++.h>
using namespace std;
string s[110];
string t;
int main(){
    int n;
    cin>>t;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             string tt=s[i]+s[j];
        if(tt.find(t)!=-1){
            puts("YES");
            return 0;
        }
        }
    }
    puts("NO");
    return 0;
}
