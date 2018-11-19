#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;

string s;
string st[110];

int main()
{
    cin>>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>st[i];
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            string ss = st[i]+st[j];
            if(ss.find(s)!=ss.npos)
            {
                cout<<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(flag)break;
    }
    if(!flag)cout<<"NO"<<endl;
    return 0;
}


