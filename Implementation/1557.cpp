#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    if(sz>7){
        sz-=7;
        for(int i=0;i<=sz;i++)
        {
            if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i+2]==s[i+3]&&s[i+3]==s[i+4]&&s[i+4]==s[i+5]&&s[i+5]==s[i+6])
            {
                cout<<"YES\n";
                return 0;
            }
        }
        cout<<"NO\n";
        return 0;
    }
    cout<<"NO\n";

}
