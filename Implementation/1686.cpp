#include <iostream>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    int x=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]) x++;
        else x=0;
        if(x+1>=7){
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
    return 0;
}
