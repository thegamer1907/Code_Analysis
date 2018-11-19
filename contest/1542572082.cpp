#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,d=0,i,j,k;
    string s,t;
    cin>>s;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>t;
        if(s==t){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            if(t[0]==s[1]){
                c=1;
            }
            if(t[1]==s[0]){
                d=1;
            }
        }
    }
    if(d==1 && c==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}
