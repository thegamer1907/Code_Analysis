#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str,str1;
    cin>>str;
    cin>>n;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        cin>>str1;
        if(str==str1){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            if(str[0]==str1[1]) x=1;
            if(str[1]==str1[0]) y=1;
        }
    }
    if(x==1 && y==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    return 0;
}
