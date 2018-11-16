#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,j, n=str.size();
    vector < int > a;
     vector < int > b;
    for(i=0;i<n;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B')
        {
           a.push_back(i);
        }
    }

    for(i=0;i<n;i++)
    {
        if(str[i]=='B'&&str[i+1]=='A')
        {
           b.push_back(i);
        }
    }

    for(i=0;i<a.size();i++)
    {
        for(j=0;j<b.size();j++)
        {
            if(abs(a[i]-b[j])>=2)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
     cout<<"NO";
}
