#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i;cin>>n;
    string s[n];
    for(i=0;i<n;i++) cin>>s[i];
    for(i=n-1;i>0;i--)
    {
        if(s[i]<s[i-1])
        {
            if(s[i-1].length()>s[i].length())
                s[i-1]=s[i-1].substr(0,s[i].length());
            for(int j=0;j<s[i-1].length();j++)
            {
                if(s[i][j]<s[i-1][j]){
                    s[i-1]=s[i-1].substr(0,j);
                    break;}
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
}
