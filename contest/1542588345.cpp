#include<bits/stdc++.h>
#define ll long long int
#define f(n,i) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    string p;
    int t,f=0;

    cin>>p>>t;
    vector<string>v;
    f(t,i)
    {
        string a;
        cin>>a;
        if(a==p)
        {
            printf("YES\n");
            f=1;
        }
        v.push_back(a);
        //cout<<v[i][0]<<endl;
    }
    if(!f)
    {
        f(v.size(),i)
    {
        if(v[i][1]==p[0])
        {
            f(v.size(),j)
            {

                if(v[j][0]==p[1])
                {
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO\n";
    }
}
