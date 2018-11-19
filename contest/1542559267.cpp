#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
    string s,s2,s3;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s2;
        v.push_back(s2);
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s[0]==v[i][1])
        {
            for(int j=0; j<v.size(); j++)
            {
                if(s[1]==v[j][0])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
