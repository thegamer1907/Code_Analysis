#include <bits/stdc++.h>
using namespace std;





int main()
{
    int b;
    cin>>b;
    int boys[b];
    for(int i=0;i<b;i++)
        cin>>boys[i];
    int g;
    cin>>g;
    int girls[g];
    for(int i=0;i<g;i++)
        cin>>girls[i];
    sort(boys,boys+b);
    sort(girls,girls+g);

    /*if(b<g)
        swap(b,g);
    int arr[g];*/
    int res;
    int ans=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<g;j++)
        {
            res=abs(boys[i]-girls[j]);
          //  cout<<res<<endl;
            if(res<=1)
            {
                ans++;
                girls[j]=10000;
                break;
            }
        }

    }
       cout<<ans<<endl;

    return 0;
}
