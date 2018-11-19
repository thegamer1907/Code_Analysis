#include <iostream>
#include <string>
using namespace std;

int main() {
    string str,strpw;
    const char *pw;
    const char *wd;
    int flg1=0,flg0=0;
    int i,n;

    cin >> strpw;  
    pw = strpw.c_str();
    cin >> n;
    for(i = 0 ; i < n ; i ++)
    {
        cin >> str;
        wd=str.c_str();
        if(str == strpw){flg0=1;flg1=1;}
        if(wd[0]==pw[1]) flg1=1;
        if(wd[1]==pw[0]) flg0=1;
    }
    if(flg0==1 && flg1==1)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    return 0;
}
