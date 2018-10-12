#include<bits/stdc++.h>
using namespace std;
int main()
{
    string entrada1,entrada2;
    long long t,y,i,j,f,c;
    map<string,bool> mp;
    while(cin>>t>>y)
    {
        for(i=0; i<t; i++)
        {
            cin>>entrada1;
            mp[entrada1]=true;
        }
        c=0;
        for(i=0; i<y; i++)
        {
            cin>>entrada2;
            if(mp[entrada2]==true)
                c++;
        }
      if(c%2==1)
        y--;
        if(t>y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}