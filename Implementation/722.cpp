#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;char s[55];
    cin>>n>>t;getchar();
    cin>>s;
    for(int i=1;i<=t;++i)  
            for(int j=1;s[j]!='\0';++j)    
                        if((s[j-1]=='B')&&(s[j]=='G'))
                            {swap(s[j-1],s[j]);j++;} 
            cout<<s<<endl;
    return 0;
    
}