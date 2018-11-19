#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    cin>>s;
    char ch1,ch2,ct1,ct2,fg;
    ch1=s[0];
    ch2=s[1];
    int t,c=0,f1=0,f2=0;
    cin>>t;
    while(t--){
        cin>>st;
        ct1=st[0];
        ct2=st[1];
        if((ct1==ch1&&ct2==ch2)||(ct2==ch1&&ct1==ch2)){
            f1=1;
            f2=1;
        }
        else if(ct2==ch1)
            f2=1;
        else if(ct1==ch2)
            f1=1;
    }
    if(f1==1&&f2==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

