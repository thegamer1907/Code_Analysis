#include <iostream>
#include<cmath>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
string x,w,k,q;
cin>>x;
int y,e=0,o=0,g=0,p=0;
cin>>y;
int r=y;
if(y==1){
    cin>>k;
    string g=k;
    reverse(k.begin(),k.end());
    if(x==k||x==g)
    cout<<"YES";
    else
        cout<<"NO";
}
else{
while(y>0)
{
cin>>k;
q=k;
reverse(k.begin(),k.end());
if(x==k||x==q)
{
    p++;
    break;
}
else if(x[0]==q[1]&&o==0){
e++;
o++;
}
else if(x[1]==q[0]&&g==0){
e++;
g++;
}
y--;
}
//cout<<e<<endl;
if(e==2||p!=0){
    cout<<"YES";

}
else
    cout<<"NO";

}

    return 0;
}
