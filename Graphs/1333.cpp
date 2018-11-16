#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
    cin>>n>>m;
    int x,f=1;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        if(f==m)
        {
         cout<<"YES";
         break ;
        }
        else if (f>m)
        {
             cout<<"NO";
             break ;
        }
        if(f==i)
        {
            f+=x;
        }
    }




    return 0;
}
