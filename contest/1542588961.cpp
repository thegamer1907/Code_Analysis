#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<string>v;

string str1,str2,str3;
int main()
{
    ll i,j,k,x,y,z,n,f=0;
    cin>>str1;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cin>>str2;
        v.push_back(str2);
        if (str1==str2)
            f=1;
    }
    if (f==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for (i=0; i<v.size(); i++)
    {
        str2=v[i];
        if (str2[1]==str1[0])
        {
            break;
        }
    }
    if (i!=n)
    {
        for (j=0; j<v.size(); j++)
        {
            str2=v[j];
         //   if (i==j)continue;
            if (str2[0]==str1[1])
            {
                f=1;
                break;
            }
        }
    }
    if (f==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}

