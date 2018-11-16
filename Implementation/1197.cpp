#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    string s;
    cin>>s;
    for(int z=0;z<b;z++)
    for(int i=0;i<a-1;i++){
        if (s[i]=='B'&&s[i+1]=='G'){
            swap(s[i],s[i+1]);
            i++;
        }
    }
    cout<<s;
}