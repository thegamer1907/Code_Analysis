#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s,c;
    cin>>n>>t;
    cin>>s;
    c=s;
    while(t){
        for(int i=0;i<n-1;++i){
            if(s[i]=='B'&&s[i+1]=='G')c[i+1]='B',c[i]='G';
        }
        --t;
        s=c;
    }
    cout<<s;
    return 0;
}