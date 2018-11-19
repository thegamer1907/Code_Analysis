#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1;
    cin>>s1;
    int n;
    cin>>n;
    vector<string> s(n);

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(s[j]==s1||s[j].substr(0,1)==s1.substr(1,1)&&s[j].substr(1,1)==s1.substr(0,1))
                {
                    cout<<"YES";
                    return 0;
                }
            }
            else
            {
            if(s[i].substr(0,1)==s1.substr(1,1)&&s[j].substr(1,1)==s1.substr(0,1)||s[i].substr(1,1)==s1.substr(0,1)&&s[j].substr(0,1)==s1.substr(1,1))
            {

                cout<<"YES";
                return 0;
            }
            }
        }
    }
    cout<<"NO";
    return 0;
    }
