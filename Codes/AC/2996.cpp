#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    int prefix[s.length()];
    int j=0;
    prefix[0]=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[j])
        {
            prefix[i]=j+1;
            j++;
        }
        else
        {
            while(j!=0)
            {
                j=prefix[j-1];
                if(s[i]==s[j])
                {
                    j++;
                    prefix[i]=j;
                    break;
                }
            }
            if(j==0)
                prefix[i]=0;
        }
    }
    int hi=prefix[s.length()-1];
    int flag=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(prefix[i]==hi)
        {
            flag=1;
            break;
        }
    }
    if(flag==1 && hi!=0)
    {
        cout<<s.substr(s.length()-hi)<<endl;
    }
    else if(hi==0)
        cout<<"Just a legend\n";
    else
    {
        if(prefix[hi-1]==0)
            cout<<"Just a legend\n";
        else
            cout<<s.substr(s.length()-prefix[hi-1])<<endl;
    }
}

