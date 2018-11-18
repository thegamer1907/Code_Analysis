#include <bits/stdc++.h>
using namespace std;
int W[1000000+20];
long long cd[10000000+20];
long long k;
int n;

int main()
{
    string a;
     int n;
      cin>>a>>n;
       vector<string> S;
           string w;
        for(int i = 0;i<n;i++)
        {
            cin>>w;
              S.push_back(w);
        }
            int kd = 0;
         for(int i = 0;i<n;i++)
         {
             for(int k = 0;k<n;k++)
             {
                 string h = S[i]+S[k];
                   for(int i = 0;i<h.size()-1;i++)
                   {
                       if(h[i]==a[0]&&h[i+1]==a[1])
                       {
                           kd =1;
                       }
                   }
             }
         }
          if(kd)
          {
              cout<<"YES"<<endl;
          }
          else
            cout<<"NO"<<endl;
}
