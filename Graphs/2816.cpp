#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int r[100009];
int e[100009];
vector<int> v[100009];
vector <int> de[100009];
int main()
{
    int n,m,s,t;
    cin>>n>>m;
    for (int i=1; i<n+1; i++)
    {
        cin>>r[i];
    }
    if (n==1)
    {
        cout<<r[1];
        return 0;
    }
    for (int i=0; i<m; i++)
    {
        cin>> s>>t;
        v[s].push_back(r[t]);
        v[t].push_back(r[s]);
    }
    for (int i=1; i<n+1; i++)
    {
        for (int ii=0; ii<v[i].size(); ii++)
        {
            if (v[i][ii]!=r[i])
                de[r[i]] .push_back(v[i][ii]);
        }
    }
    for (int i=1; i<n+1; i++)
    {
        sort(de[i].begin(),de[i].end());
    }
    for (int i=1; i<100001; i++)
    {
        if (de[i].size()==0)
            continue;
        int gh=de[i][0];
        e[i]=1;
        for (int ii=0; ii<de[i].size(); ii++)
        {
            if (de[i][ii]!=gh)
            {
                gh=de[i][ii];
                e[i]++;
            }
        }
    }
    int maxx=e[0];
    int rmaxx=0;
    for (int i=1; i<100001; i++)
    {
        if (e[i]>maxx)
        {
            maxx=e[i];
            rmaxx=i;
        }
    }
    if (maxx==0)
    {
          maxx=r[1];
          for (int i=1;i<n+1;i++)
          {
            if (r[i]<maxx)
            {
                  maxx=r[i];
            }
          }
          cout<<maxx;
          return 0;
    }
    cout<<rmaxx;
}

