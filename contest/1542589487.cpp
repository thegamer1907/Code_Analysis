#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
        cin>>str[i];
 
        bool ans=false,ans2=false;
        for(int i=0;i<n;i++)
        {
            if(str[i]==s)
            {
                ans=true;
            }
        }
        if(ans)
            cout<<"YES";
        else{
            for(int i=0;i<n;i++)
                if(str[i][1]==s[0])
                    ans=true;
            for(int i=0;i<n;i++)
                if(str[i][0]==s[1])
                    ans2=true;
            if(ans & ans2)
                cout<<"YES";
            else
                cout<<"NO";
        }   
}