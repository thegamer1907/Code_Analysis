#include <bits/stdc++.h>

using namespace std;

string s;
int n;
string subs[101];

int main()
{
    ios::sync_with_stdio(0);
    cin>>s;
    cin>>n;
    int flag = 0,flag1=0,flag2=0;
    for(int i=0; i<n; i++){
        cin>>subs[i];
        if(subs[i][0]==s[0]&&subs[i][1]==s[1]){
            flag = 1;
        }
        if(subs[i][0]==s[1]&&subs[i][1]==s[0]){
            flag = 1;
        }
        if(subs[i][1]==s[0]){
            flag1 = 1;
        }
        if(subs[i][0]==s[1]){
            flag2 = 1;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        if(flag1&&flag2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
