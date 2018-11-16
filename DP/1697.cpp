#include <bits/stdc++.h>
using namespace std;
string s; int vab,vba;
int main()
{
    //freopen("ntu.inp","r",stdin);
    //freopen("ntu.out","w",stdout);
    cin>>s;
    vab=s.find("AB",0); vba=s.find("BA",0);
    if((vab!=s.npos && s.find("BA",vab+2)!=s.npos)||(vba!=s.npos && s.find("AB",vba+2)!=s.npos)) cout<<"YES"; else cout<<"NO";
}
