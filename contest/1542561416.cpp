#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main ()
{
    string s[111],r;
    char t1[3],t2[3];
    ll n;
    cin>>r;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t1[0]=s[j][1];
            t1[1]=s[i][0];
            t2[0]=s[i][1];
            t2[1]=s[j][0];
            //cout<<endl<<t1<<" "<<t2;
            //cout<<endl<<s[j][1]<<s[i][0]<< " "<<s[i][1]<<s[j][0];
            if(t1==r||t2==r||s[i]==r)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";

}
