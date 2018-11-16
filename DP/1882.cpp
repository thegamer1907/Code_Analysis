#include<bits/stdc++.h>
using namespace std;

string s;
int a, b, a1, b1;
int main(){
    
    cin >> s;
    for(int i=0; i<s.size()-1; i++){
        if(a==0 && s[i]=='A' && s[i+1]=='B'){
            a=1;
            i++;
        }
        else if(a==1 && b==0 && s[i]=='B' && s[i+1]=='A'){
            b=1;
            i++;
        }
    }
    if(a && b){
        cout << "YES" << endl;
        return 0;
    }

    for(int i=0; i<s.size()-1; i++){
        if(b1==0 && s[i]=='B' && s[i+1]=='A'){
            b1=1;
            i++;
        }
        else if(b1==1 && s[i]=='A' && s[i+1]=='B'){
            a1=1;
            i++;
        }
    }
    if(a1 && b1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
return 0;
}