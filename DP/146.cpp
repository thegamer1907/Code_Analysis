#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<int>a,b;

     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         a.push_back(x);

     }
    int m;
    cin>>m;
     for(int i=0;i<m;i++)
     {
         int x;
         cin>>x;
         b.push_back(x);
     }

     int count = 0;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     for(int i=0;i<a.size();i++)
     {
         for(int j=0;j<b.size();j++)
         {

             if(abs(a[i]-b[j])<=1)
            {
                count++;

                b.erase(b.begin()+j);

                break;
             }
         }
     }
     cout<<count<<endl;
}

