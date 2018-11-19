#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
    string p,w[105],ts,ts2;
    cin>>p;
    cin>>n;
    int f=0;
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            ts+=w[i];
            ts+=w[j];
            for(int k=0;k<ts.size()-1;k++)
            {
                if(ts[k]==p[0] && ts[k+1]==p[1])
                {
                    f=1;
                }
            }
            ts2+=w[j];
            ts2+=w[i];
            for(int k=0;k<ts2.size()-1;k++)
            {
                if(ts2[k]==p[0] && ts2[k+1]==p[1])
                {
                    f=1;
                }
            }
            
            ts.clear();
            ts2.clear();
        }
       
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}