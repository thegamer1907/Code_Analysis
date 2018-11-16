
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a = s.find("AB");
    int b = s.find("BA");
    if((a!=-1 && s.find("BA",a+2)!=-1)||(b!=-1 && s.find("AB",b+2)!=-1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
