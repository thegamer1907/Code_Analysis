#include <bits/stdc++.h>
using namespace std;
#define ll long long
string p[500010];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j=0,babu=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=n-2;i>=0;i--)
    {
        if(p[i+1]=="#")
        {
            p[i]="#";
            babu=i;
            break;
        }
        else if(p[i+1]<p[i])
        {
            int l=p[i].size();
            for(j=1;j<l;j++)
            {
                if(p[i][j]>p[i+1][j])
                {
                    p[i].resize(j);
                    break;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(babu==0)
            cout<<p[i]<<endl;
        else if(babu>i)
        {
            cout<<"#"<<endl;
        }
        else
            cout<<p[i]<<endl;

    }


    return 0;
}

