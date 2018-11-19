
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1;
    cin>>s1;
    char a=s1[0],b=s1[1];
    bool flag1=0,flag2=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        string ss;
        cin>>ss;
        if(ss==s1)
            flag1=flag2=true;
        if(ss[0]==b){
            flag2=true;
        }
        if(ss[1]==a){
            flag1=true;
        }
    }
    if(flag1&&flag2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
