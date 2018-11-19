#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a=0,b=0;
    string st,tmp;
    cin>>st;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        if(tmp[0]==st[1]&&tmp[1]==st[0]) {cout<<"YES"<<endl;return 0;}
        if(tmp[0]==st[0]&&tmp[1]==st[1]) {cout<<"YES"<<endl;return 0;}
        if(tmp[1]==st[0]) a=1;
        if(tmp[0]==st[1]) b=1;
    }
    if(a+b==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
