#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,t;
    cin>>a>>t;
    string f;
    cin>>f;
    for(int i=0;i<t;i++){
        for(int j=0;j<a;j++){
            if(f[j]=='B'&&f[j+1]=='G'){swap(f[j],f[j+1]);j++;}
        }
    }cout<<f;
return 0;}
