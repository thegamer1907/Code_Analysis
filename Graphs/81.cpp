#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i,j,t,k;
    cin>>n>>t;
    string s;
    cin>>s;
    for(k=0;k<t;k++){
    for(i=0;i<n;i++){
        if(s[i] == 'B' && s[i+1] == 'G'){
            j = s[i];
            s[i] = s[i+1];
            s[i+1] = j;
            i += 1;
        }
    }
    }
    cout<<s;
    return 0;
}