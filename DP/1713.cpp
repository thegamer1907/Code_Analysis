#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool hasab=0,hasba=0,ans=0;
    for(int i=1;i<(int)s.size()-1;i++){
        if(hasab&&s[i]=='B'&&s[i+1]=='A'){
            ans=1;
        }
        if(hasba&&s[i]=='A'&&s[i+1]=='B'){
            ans=1;
        }
        
        if(s[i-1]=='A'&&s[i]=='B'){
            hasab=1;
        }
        if(s[i-1]=='B'&&s[i]=='A'){
            hasba=1;
        }
    }
    printf(ans? "YES": "NO");
}
