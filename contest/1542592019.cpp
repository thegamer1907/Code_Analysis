#include <bits/stdc++.h>

using namespace std;

int n;
string str,temp;
bool f,b;

int main()
{
    cin>>str;
    cin>>n;
    while(n--){
        cin>>temp;
        if(temp[0]==str[1])b=1;
        if(temp[temp.size()-1]==str[0])f=1;
        if(temp==str){f=1;b=1;}
    }
    if(f && b)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
