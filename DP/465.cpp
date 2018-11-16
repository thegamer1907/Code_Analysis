#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
main()
{
    int b1,g1,c=0,k,i;
    cin>>b1;
    int b[b1];
    for( i=0 ; i<b1 ; i++)
        cin>>b[i];
    cin>>g1;
    int g[g1];
    for( i=0 ; i<g1 ; i++)
        cin>>g[i];
    sort(b,b+b1);
    sort(g,g+g1);

    for(i=0;i<b1;i++)
    {
        for(k=0;k<g1;k++)
        {
            if(b[i]-g[k]==0||b[i]-g[k]==1||b[i]-g[k]==-1)
            {
                c++;
                g[k]=110;
                break;
            }
        }

    }
    cout<<c;

}
