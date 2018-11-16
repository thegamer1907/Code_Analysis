#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,b[100005],m,g[100005],j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>b[i];
    sort(b,b+n);
    
    cin>>m;
    for(i=0;i<m;i++)
    cin>>g[i];
    sort(g,g+m);
    
    i=0;
    j=0;
    while(i<n && j<m)
    {
        //cout<<b[i]<<" "<<g[j]<<endl;
        if(abs(b[i]-g[j]) <=1)
        {
            c++;
            i++;
            j++;
        }
        else if(b[i]>g[j])
        {
            j++;
        }
        else
        {
            i++;
        }
        //cout<<i<<"  gg "<<j<<" m="<<m<<endl;
    }
    cout<<c<<endl;
}