#include<bits/stdc++.h>
using namespace std;
#define d 1000000
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m),v3(d,0),v4(n);
    for(int i = 0; i<n; i++)
        cin>>v1[i];

    int cnt = 0;
    for( int i = n-1; i>=0; i--)
    {
        if(v3[v1[i]]==0)
        {
            v3[v1[i]]=1;
            cnt++;
            v4[i]=cnt;

        }
        else
        {
            v4[i]=cnt;

        }

    }
    int temp;
    for(int i = 0; i<m; i++)
    {
        cin>>v2[i];
        cout<<v4[(v2[i]-1)]<<endl;
    }

    return  0;

}
