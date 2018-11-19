#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n,cnt=0,flag=0;

    string str,str1;
//    vector<string> v[101];

    cin>>str;

    cin>>n;

    for(ll i=0;i<n;i++)
    {
        cin>>str1;

        if(str1==str)
        {
            cout<<"YES"<<endl;
            return 0;
        }

        else if(str[0]== str1[1] && str[1]==str1[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }

        if(str1[0]== str[1])flag=1;

        else if(str1[1]==str[0])cnt=1;

    }

//    for(ll i=0;i<n;i++)
//    {
//        if(v[i][1] == str[0])flag=1;
//
//        if(v[i][0]==str[1])cnt=1;
//    }


    if(flag==1 && cnt==1)cout<<"YES"<<endl;

    else cout<<"NO"<<endl;

}
