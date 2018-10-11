#include <bits/stdc++.h>
using namespace std;
map<string , int > V;

int main()
{    int n,m;
        cin>>n>>m;
       queue<string> C;
          queue<string> D;
           for(int i = 0 ; i<n;i++)
           {
               string w;
                cin>>w;
                 C.push(w);
                  V[w]=1;
           }
               queue<string> B;
             for(int i = 0 ; i <m ; i++)
             {
                 string w;
                  cin>>w;
                   D.push(w);
                     if(V[w])
                     {
                         B.push(w);
                     }
             }
              int h = C.size()-B.size();
              int hh = D.size()-B.size();
                int k = B.size();
                  if(k%2)
                  {
                      if(hh)
                      {
                          hh--;
                          k++;
                      }
                      else
                        {cout<<"YES"<<endl;
                          return     0;}
                  }
                 for(;;)
                 {
                     if(h)
                     {
                         h--;
                         k++;
                     }
                      else
                        break;
                      if(hh)
                      {
                          hh--;
                          k++;
                      }
                      else
                        break;
                 }
                 if(k%2)
                 {
                     cout<<"YES"<<endl;
                 }
                 else
                    cout<<"NO"<<endl;
    return 0;
}
