#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    vector<int> adjlist;
    int visited=0;
};

int main()
{
    int n,t;
    cin>>n>>t;
    vector<node> v(n+1);
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        v[i].adjlist.push_back(i+a);
    }

    int s=1,flag=0;
    queue<int> q;
    q.push(s);
    v[s].visited=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        // cout<<p<<" "<<v[p].adjlist.size()<<endl;
        for(int j=0;j<v[p].adjlist.size();j++)
        {
            int nd=v[p].adjlist[j];
            if(v[nd].visited==0)
            {
                q.push(nd);
                v[nd].visited=1;
                if(nd==t)
                    flag=1;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;

    return 0;

}