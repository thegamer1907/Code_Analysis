#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    int n;
    cin>>n;
    s1="";
    //nt x=100;
    
    while(n--){
        string s2;
        cin>>s2;
        s1+=s2;
    }
    if(n==1){
        if(s==s1)cout<<"YES\n";
        else if(s[0]==s1[1] && s[1]==s1[0])cout<<"YES\n";
        else cout<<"NO\n";
    }
    int flag=0,f1=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s[0] && s1[i+1]==s[1]){
            flag=1;
            break;
        }
        else if(i%2!=0 && s1[i]==s[0]){
            for(int j=0;j<s1.size();j++){
                if(j%2==0 && s1[j]==s[1]){
                    flag=1;
                    break;
                }
            }
        }
    }

    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
}
