#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
       cin>>str[i];
    for(int i=0;i<n;i++)
    {
        string st=str[i];
        for(int j=0;j<n;j++)
        {
            string a=st+str[j];
            for(int k=0;k<a.size()-1;k++)
            {
                if(s==a.substr(k,2))
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";

}
