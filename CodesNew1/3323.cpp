#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,l,kmx,kmin,mx,t,peeps;
    vector <int> x;
    cin >> n >> m;
    t=m;
    for(int i=0; i<n; i++)
    {
        cin >> l;
        x.push_back(l);
    }
    sort(x.begin(),x.end());
    mx=x.back();
    kmx=mx+m;
    for(int i=0; i<x.size(); i++)
    {

        peeps=mx-x[i];
        if(x[i]<mx)
        {
            if(m-peeps>=0)
            {
                x[i]+=peeps;
                m-=peeps;
            }

            else if(m-peeps<0 && m!=0)
            {
                x[i]+=m;
                m=0;
            }
        }
    }
    while(m>0)
    {
        for(int i=0;i<x.size();i++)
        {
            if(m>0)
            {
            x[i]++;
            m--;
            }
        }
    }
    sort(x.begin(),x.end());
    kmin=x.back();
    cout << kmin << ' ' << kmx << endl;
    return 0;
}
