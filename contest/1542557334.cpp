#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k;
    vector<int> v[n+1];
    unordered_map<int,int> m ;
    int el;
    for(int i=0;i<n;i++)
    {
        el=0;
        for(int j=0;j<k;j++)
        {
            cin>>x;
            el *= 2;
            el += x;
            v[i].push_back(x);
        }
        m[el] = 1;
    }
    for(int i=0;i < (1<<k);i++)
    {
        for(int j=0;j< (1<<k);j++)
        {
            if( (i&j) == 0 && m[i] && m[j])
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }
    }
    cout<<"NO"<<endl;
}
