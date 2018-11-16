#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;++i){
        for(int j=0;j<n;++j){
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(s[j],s[j+1]);
                ++j;
            }        
        }
    }
    cout<<s;
}