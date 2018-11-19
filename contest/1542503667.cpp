#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int n;
    bool r1=false,r2=false;
    cin>>s1>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s2;
        if(s1==s2){r1=true;r2=true;}
        if(s2[1]==s1[0]){r1=true;}
        if(s2[0]==s1[1]){r2=true;}

    }
    if(r1==true && r2==true){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}


    return 0;
}
