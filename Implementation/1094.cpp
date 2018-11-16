#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,i,j;
    string s;

    cin>>a>>b;
    cin>>s;
    while(b--){
        for(i=0;i<s.length()-1;)
if(s[i]=='B'&&s[i+1]=='G'){
    s[i]='G';
    s[i+1]='B';
    i+=2;
}
else i++;    }
cout<<s<<endl;
}
