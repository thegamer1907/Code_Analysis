#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    int cnt1=0,cnt2=0;
    cin>>s;
    int ln=s.size();
    int p1=s.find("AB");
    int p2=s.find("BA",p1+2,2);
    if (p1>=0 && p2>=0){
        cout<<"YES"<<endl;
        return 0;
    }
    int p3=s.find("BA");
    int p4=s.find("AB",p3+2,2);

    if (p3>=0 && p4>=0){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
   // cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4;
}
