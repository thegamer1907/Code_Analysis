#include<bits/stdc++.h>
using namespace std;
int n,t;
string s;
int main()
{
    cin>>n>>t;
    cin>>s;
    while(t>0)
     {
         for(int i=0;i<s.length(); i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
                continue;
            }
        }
        t--;
    }
    cout<<s;;
}
