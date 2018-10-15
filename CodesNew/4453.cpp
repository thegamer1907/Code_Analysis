#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=a[i].substr(1,a[i].length());
    }
    for(int i=n-2;i>-1;i--){
        if(a[i+1]==""){
            a[i]="";
            continue;
        }
        if(a[i+1].length()<a[i].length()){
            if(a[i].substr(0,a[i+1].length())==a[i+1]){
                a[i]=a[i+1];
                continue;
            }
        }
        if(a[i]==a[i+1])
            continue;
        for(int j=0;j<min(a[i].length(),a[i+1].length());j++){
            if(a[i][j]>a[i+1][j]){
                a[i]=a[i].substr(0,j);
                break;
            }
            if(a[i][j]==a[i+1][j])
                continue;
            else
                break;
        }
    }
    for(auto i:a)
        cout<<"#"<<i<<endl;
    return 0;
}