#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>s;
    cin>>n;
    int a=0,b=0;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        string y = x;
        reverse(y.begin(), y.end());
        if(s==x || s==y){
            cout<<"YES"<<endl;
            return 0;
        }
        if(s[0] == x[1])
            a=1;
        if(s[1] == x[0])
            b=1;
    }
    if(a&&b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
