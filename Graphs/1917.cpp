#include <iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    //freopen("a.in","r",stdin);
    int m,n,a,c=0;
    vector <int> g,b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b.push_back(a);
    }
    cin>>m;
    while(m--)
    {
        cin>>a;
        g.push_back(a);
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    for(int i=0;i<b.size();i++)
    {
        for(int j=0;j<g.size();j++)
        {
            if(abs(b[i]-g[j])<=1)
            {
                g[j]=1000;
                b[i]=-1000;
                c++;
            }
        }
    }
    cout<<c;
    return 0;
}
