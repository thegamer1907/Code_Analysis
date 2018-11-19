#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main ()
{
    string s,tmp;
    cin>>s;
    int n;
    bool f=0,sec=0,b=0;
    cin>>n;
    while(n--){
        cin>>tmp;
        if(tmp[0]==s[1]){
            sec=1;
        }
        if(tmp[1]==s[0]){
            f=1;
        }
        if(tmp==s){
            b=1;
        }
    }
    if(b || sec+f==2){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}
