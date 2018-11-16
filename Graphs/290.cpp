#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("0.in","r",stdin);
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    while(b--){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                s[i]='G';s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s;

}
