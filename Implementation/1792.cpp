#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,len,one=0,zero=0;
    cin>>s;
    len = s.size();
    for(i=0;i<len;i++){
        if(s[i] == '1'){
            one++;
            zero=0;
        }
        else if(s[i] == '0'){
            zero++;
            one=0;
        }
        if(one>=7 || zero>=7){
            break;
        }
    }
    if(one>=7 || zero>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
