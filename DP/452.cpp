#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{

    int i,j,n,m,b[100],g[100],count=0;

    cin>>n;
    for(i=0; i<n; i++)
    {

        cin>>b[i];

    }
    sort(b,b+n);

    cin>>m;
    for(j=0; j<m; j++)
    {

        cin>>g[j];
    }
    sort(g,g+m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(abs(b[i]-g[j])<=1)
                {
                    count++;
                    g[j]=100000;
                    break;
                }
        }
    }
    cout<<count<<endl;
    return 0;
}
