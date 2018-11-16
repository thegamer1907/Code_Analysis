#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        v.push_back(r);
        if(r==1)
            e++;
    }
    int mx2=-10000000;
    int mx1=0;
    if(n-e>0)
    for(int i=0;i<n;i++)
    {
            if(v[i]==0)
            {
                int r=0,mx1=-100000;
                for(int j=i;j<n;j++)
                {
                    if(v[j]==0)
                        r++;
                    else
                        r--;
                        if(r>mx1)
                            mx1=r;
                }
                if(mx1>mx2)
                    mx2=mx1;

            }
    }
    else
    {
        cout<<e-1;
        return 0;
    }
    cout<<e+mx2;

}
