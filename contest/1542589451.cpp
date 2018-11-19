#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0;
    bool q1=true,q2=true;
    int n;
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        string rev;
        rev+=a[1];
        rev+=a[0];
        if(a==s|| rev==s) {cout<<"YES"<<endl;return 0;}
        if(a[0]==s[1] && q1==true) {t++;q1=false;}
        if(a[1]==s[0] && q2==true) {t++;q2=false;}
    }
    if(t==2){cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
    return 0;
}
