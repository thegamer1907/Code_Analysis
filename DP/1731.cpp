#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector< pair<int,int> >ab,ba;
    cin>>s;
    int sz=s.size()-1;
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
            ab.push_back(make_pair(i,i+1));
        if(s[i]=='B'&&s[i+1]=='A')
            ba.push_back(make_pair(i+1,i));
    }
    int ab_sz=ab.size();
    int ba_sz=ba.size();
    for(int i=0;i<ab_sz;i++)
    {
        for(int j=0;j<ba_sz;j++)
        {
            if(ab[i].first!=ba[j].first&&ab[i].second!=ba[j].second)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
}
