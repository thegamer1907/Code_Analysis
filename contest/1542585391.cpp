#include <iostream>

using namespace std;

int main()
{
string p;
int n;
cin>>p;
cin>>n;
string w[n];
string ans="NO";
string s1="",s="";
for (int i=0;i<n;i++) cin>>w[i];
for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        s=w[i]+w[j];
        //cout<<s<<" ";
        if (s.find(p)!=-1)ans="YES";
        s="";
    }
}   
cout<<ans<<endl;
return 0;
}