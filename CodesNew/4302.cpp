#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }

    for(int i=n-2;i>=0;i--)
    {
        string a=v[i];
        string b=v[i+1];
        string c="#";
        if(a>b)
        {
            for(int j=1;j<min(a.length(),b.length());j++)
            {
                if(a[j]==b[j])
                    c+=a[j];
                else
                {
                    v[i]=c;
                    break;
                }
            }
            v[i]=c;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}
