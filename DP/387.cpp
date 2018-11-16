#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v,v1;
    int n,m,cnt=0,k=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>m;
    while(m--)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }
     sort(v.begin(),v.end());
     sort(v1.begin(),v1.end());

    if(v.size()>v1.size())
    {
         //cout<<"25"<<endl;
        for(int i=0;i<v1.size();i++)
        {

            for(int j=0;j<v.size();j++)
            {
                if(abs(v1[i]- v[j]) <= 1 ){
                  cnt++;

                  //cout<<v1[i]<<" "<<v[j]<<endl;

                   v.erase(v.begin()+j);
                  break;

                }
            }

        }
    }
    else    {
        for(int i=0;i<v.size();i++)
        {
           // cout<<"46"<<endl;
            for(int j=0;j<v1.size();j++)
            {
                if(abs(v[i]-v1[j] ) <= 1 ){

                  cnt++;
                  //cout<<v[i]<<" "<< v1[j]<<endl;
                     v1.erase(v1.begin()+j);


                  break;

                }
            }

        }
    }
    cout<<cnt<<endl;

}
