#include <bits/stdc++.h>
using namespace std;
const int inf =10e5;
string s , a[inf];
int n ,o,t;
int main() {
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(s[0]==a[i][1]){
            o++;}
        if(s[1]==a[i][0]){
            t++;}
        if(s==a[i]){
            t++;
            o++;}

    }
    //cout<<o<<" "<<t<<endl;
        if((o>0)&&(t>0)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }



	return 0;
}
