#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    
    for(int x=0;x<t;x++){
        int i=0;
    while(i<n-1){
        if(s[i]=='B'&&s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i=i+2;
        }
        else{
            i++;
        }
    }
    }
    cout<<s<<"\n";
    return 0;
}