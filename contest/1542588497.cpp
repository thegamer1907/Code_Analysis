#include<iostream>
#include<vector>
using namespace std ;
int main ()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        v.push_back(str);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {

            if(v[i][0]==s[0]&&v[i][1]==s[1])
            {
                flag=1;
            }
            if(v[i][1]==s[0]&&v[i][0]==s[1])
            {
                flag=1;
            }
    }
    if(flag==1)
    {
        cout<<"YES";
        return 0  ;
    }
    int flag1=0;
    int flag3=0;
    for(int i=0;i<v.size();i++)
    {
       /* if(v[i][0]==s[0])
        {
            flag1=1;

        }*/
        if(v[i][1]==s[0])
        {
            flag1=1;

        }
    }
    int flag2=0;
    int flag4=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]==s[1])
        {
            flag2=1;

        }
       /* if(v[i][1]==s[1])
        {
            flag4=1;

        }*/
    }
    if(flag1==1&&flag2==1)
    {
        cout<<"YES";
        return 0 ;
    }
    cout<<"NO";
    return 0 ;
}
