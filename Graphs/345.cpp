#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    string s;
    cin>>x>>y>>s;
    while(y--){
        for(auto i=0;i<s.size()-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
}