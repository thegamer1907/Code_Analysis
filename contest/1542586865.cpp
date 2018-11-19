/******************************************
          Mobarak Hosen Shakil
        ICE, Islamic University
     ID: mhiceiuk(all), 29698(LOJ)
   E-mail: mhiceiuk @ (Gmail/Yahoo/FB)
 Blog: https://iuconvergent.wordpress.com
*******************************************/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string p, s[105];
    int n;
    cin>>p>>n;
    bool chk=false;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int c=0;
    for(int i=0; i<2; i++)
    {
        chk=false;
        for(int j=0; j<n; j++)
        {
            if(p==s[j]) {
                cout<<"YES"<<endl;
                return 0;
            }
            if(s[j][i]==p[1-i])
            {
                chk=true;
                break;
            }
        }
        if(chk) c++;
    }

    if(c==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
