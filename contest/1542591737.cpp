#include <bits/stdc++.h>
using namespace std;
string s,t[1000],flag1,flag2,flag;
int n;
int main(){
    cin>>s>>n;
    for (int i=1; i<=n; i++){
        cin>>t[i];
        if (t[i]==s) return cout<<"YES", 0;
    }
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++){
                flag1=t[i];
                flag2=t[j];
                flag=flag1[1];
                flag=flag+flag2[0];
                if (s==flag) return cout<<"YES", 0;
                flag=flag2[1];
                flag=flag+flag1[0];
                if (s==flag) return cout<<"YES", 0;
            }
    cout<<"NO";
}
