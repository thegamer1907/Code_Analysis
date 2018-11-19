#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn=100000+100;
string gg[105];
string s;
int n;
int main()
{
    cin>>s;
    cin>>n;
    int x,y;
    x=0;
    y=0;
    for(int i=0;i<n;i++){
        cin>>gg[i];
        if(s[0]==gg[i][1])
            x=1;
        if(s[1]==gg[i][0])
            y=1;
        if(s==gg[i]){
            x=1;
            y=1;
        }
    }
    if(x*y)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
