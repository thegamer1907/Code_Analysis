#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string ans;
    cin>>ans;

    string s;
    cin>>s;

    queue <string> q;

    vector <string> v;

    q.push(s);

    while(!q.empty())
    {
        string temp=q.front();

        q.pop();

        LL i;

        bool b=true;

        for(i=0;i<temp.length();i++)
        {
            if(temp[i]=='?')
            {
                temp[i]='+';
                q.push(temp);
                temp[i]='-';
                q.push(temp);
                b=false;
                break;
            }
        }

        if(b)
        v.push_back(temp);

    }

    LL pos=0;

    LL i;

    for(i=0;i<ans.length();i++)
    {
        if(ans[i]=='+')
        pos++;

        else
        pos--;
    }

    LL count=0;

    for(auto x:v)
    {
        LL tc=0;

        LL i;

        for(i=0;i<x.length();i++)
        {
            if(x[i]=='+')
            tc++;

            else
            tc--;
        }

        if(tc==pos)
        count++;
    }
    double prob=double(count)/double(v.size());
    cout<<setprecision(15);
    cout<<prob<<"\n";
}
