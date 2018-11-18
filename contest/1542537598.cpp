#include <bits/stdc++.h>
using namespace std;
int main(){
    string pass;
    int first=0,last=0;
    cin>>pass;
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==pass){
             cout<<"YES";
            return 0;
        }
        if(a[i][1]==pass[0] && a[i][0]==pass[1]){
            cout<<"YES";
            return 0;
        }
        if(a[i][1]==pass[0]){
            first=1;
        }
        if(a[i][0]==pass[1]){
            last=1;
        }
    }
    if(first && last){
        cout<<"YES";
            return 0;
    }else {
        cout<<"NO";
    }
}