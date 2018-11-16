#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a;
    string s,s1;
    cin>>s;
    x=s.find("AB");
    if(x==-1)
    cout<<"NO"<<endl;
    else{
            s1=s;
    s.replace(x,2,"XX");
    y=s.find("BA");
    if(y==-1){
            a=s1.find("BA");
    if(a==-1)
        cout<<"NO"<<endl;
    else{
        s1.replace(a,2,"XX");
        z=s1.find("AB");
        if(z==-1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    }
    else
        cout<<"YES"<<endl;
    }
    return 0;
}
