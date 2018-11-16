#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,temp;
    int a=0,b=0,c=0;
    cin>>n;
    while(n--){
        cin>>temp;
        a += temp;
        cin>>temp;
        b += temp;
        cin>>temp;
        c += temp;
    }
    if(a==0 && b==0 && c==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}