#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main(){
    string s;
    cin>>s;
    int cnt=1;
    char pre=s[0];
    bool flag=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==pre) cnt++;
        else{
            if(cnt>=7){flag=1;break;}
            pre='1'-pre+'0';
            cnt=1;
        }
        //cout<<cnt<<endl;
    }
    if(cnt>=7) flag=1;
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

