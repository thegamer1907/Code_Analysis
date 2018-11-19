#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
int n,i,j;
cin>>s;
cin>>n;
string a[n];
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) {
    if(a[i]==s){
        cout<<"YES";
        return 0;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[j][1]==s[0]&&a[i][0]==s[1]){
            cout<<"YES";
            return 0;
        }
    }
}
cout<<"NO";
return 0;
}
