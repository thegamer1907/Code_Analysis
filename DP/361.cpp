#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k=0,l,m,n,p,q;
    vector <int>vec1,vec2;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>p;
        vec1.push_back(p);
    }
    sort(vec1.begin(),vec1.end());
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p;
        vec2.push_back(p);
    }
    sort(vec2.begin(),vec2.end());
    for(i=0; i<vec1.size(); i++)
    {
        for(j=0; j<vec2.size(); j++)
        {
            if(abs(vec1[i]-vec2[j])==1 || abs(vec1[i]-vec2[j])==0)
            {
                vec1.erase(vec1.begin()+i);
                vec2.erase(vec2.begin()+j);
                k++;
                i=-1;
                break;
            }
        }
    }
    cout<<k;
    return 0;
}
