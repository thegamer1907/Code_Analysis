#include<bits/stdc++.h>
using namespace std;
int main ()
{

    string  s;
    cin >>s;
    int n,i;
    cin >>n;

    string all[110];
    for( i=0;i<n;i++)
    {

        cin >> all[i];
    }
    int f=0;
    for(i=0;i<n;i++)
    {
       if(s[0]==all[i][1])
       {
           f++;
           break;
       }
    }
    for(i=0;i<n;i++)
    {
       if(s[1]==all[i][0])
       {
           f++;
           break;
       }
    }
    if(f==2)
    {
        cout <<"YES"<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
       if(s[0]==all[i][0]   && s[1]==all[i][1])
       {
          cout <<"YES"<<endl;
          return 0;
           break;
       }
    }




        cout <<"NO"<<endl;
    return  0;


}
