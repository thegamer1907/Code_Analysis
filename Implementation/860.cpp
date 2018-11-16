#include<bits/stdc++.h>
using namespace std;
string xn(string n){
    string x="";
	for(int i=0 ; i<n.size() ; i++){
        if(n[i]=='B' && n[i+1]=='G'){
            x+="GB";
            i++;
        }
        else
            x+=n[i];
    }
    return x;
}
int main(){
    int n,x;
    string s;
    cin>>n>>x>>s;
    for(int i=0 ; i<x ; i++){
        s=xn(s);
    }
    cout<<s<<endl;
}
