#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int m;
        cin>>m;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        int maxp=v.back()+m,minp;

        while(m>0)
        {
             for(int i=0;i<n&&m!=0;i++)
          {
            if(v[i]==v.back())
            {
               v[i]++;
               m--;
               //cout<<"Working"<<endl;
            }

            else if(v.back()-v[i]>m)
            {
                v[i]+=m;
                m=0;
                //cout<<"Working1"<<endl;
            }
            else
            {
                 m-=(v.back()-v[i]);
                 v[i]=v.back();

                //cout<<"working2 "<<m<<endl;
            }
        }
        }


     // for(int i=0;i<n;i++)
        //cout<<v[i]<<" ";
        //cout<<endl;
      minp=*max_element(v.begin(),v.end());
      cout<< minp<<" "<<maxp<<endl;
    }
}
