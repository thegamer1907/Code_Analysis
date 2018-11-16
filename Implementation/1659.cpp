#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt;
    string str;
    cin>>str;
    cnt=0;
    for(i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]) cnt++;
        else cnt=0;
        if(cnt==6) break;
    }
    if(cnt==6) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
