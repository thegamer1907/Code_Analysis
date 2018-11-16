#include<bits/stdc++.h>
using namespace std;
int a[120];
int b[120];
int vis[120];
int main()
{

    int n,m;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a,a+n);
    cin>>m;
    for(int i = 0; i < m; i++) cin>>b[i],vis[i]=0;
    sort(b,b+m);
    int sum = 0;
    int j;
    for(int i =0; i < n; i++)
    {

        for( int j = 0; j < m; j++)
        {

            if(vis[j] == 0 && abs(a[i] - b[j]) <= 1 )
            {
                sum++;
                vis[j] = 1;

                break;
            }
        }
    }
    cout<<sum;
}
