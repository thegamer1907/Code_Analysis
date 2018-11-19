#include<bits/stdc++.h>
using namespace std;
map<char,int> m1,m2;
int main()
{
    string s1,tt,s2;
    int n;
    cin>>s1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {

        cin>>s2;
        if(s2==s1)
        {

            cout<<"YES"<<endl;
            return 0;
        }
        m1[s2[0]]=1;
        m2[s2[1]]=1;
    }
    if(m1[s1[1]]&&m2[s1[0]])
    {

        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}
