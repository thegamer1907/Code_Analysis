#include <bits/stdc++.h>

using namespace std;
string s;

bool solve1(){
    bool resa=false,resb=false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            if(i!=0&&!resa){
                if(s[i-1]=='A'){
                    resa=true;
                }
            }
            else if(i!=s.size()-1&&!resb){
                if(s[i+1]=='A'){
                    resb=true;
                    i+=2;
                }
            }
        }
    }
    if(resa&&resb){
        return true;
    }
    else{
        resa=false;
        resb=false;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            if(i!=s.size()-1&&!resb){
                if(s[i+1]=='A'){
                    resb=true;
                    i+=2;
                }
            }
            else if(i!=0&&!resa){
                if(s[i-1]=='A'){
                    resa=true;
                }
            }
        }
    }
    if(resa&&resb){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    if(solve1()){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}