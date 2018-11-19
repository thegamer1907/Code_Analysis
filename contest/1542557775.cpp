#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,i,j;
    char a,b,ch,ch1;
    cin>>a>>b;
    cin>>n;
    vector< pair<char,char> > pass;
    for(i=0;i<n;i++)
    {
        cin>>ch>>ch1;
        pass.push_back(make_pair(ch,ch1));
    }
    ch = a;
    for(i=0;i<pass.size();i++)
    {
        for(j=0;j<pass.size();j++)
        {
                if((pass[i].second == a && pass[j].first == b)||(pass[i].first == a && pass[i].second == b))
                {
                    cout<<"YES"<<endl;
                    exit(0);
                }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
