/*
 Time & Date of creation 11:13:35 30/10/2018  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    string ss;
    cin>>ss;

    // string t1,t2;

    if(ss.size()<4)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    char t1,t2;

    for(int i=0;i<ss.size()-1;i++)
    {
        t1=ss[i];
        t2=ss[i+1];

        if((t1=='A' && t2=='B') || (t1=='B' && t2=='A'))
        {
            if(t1=='A')
            {
                for(int j=i+2;j<ss.size()-1;j++)
                {
                    if(ss[j]=='B' && ss[j+1]=='A')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
            else
            {
                for(int j=i+2;j<ss.size()-1;j++)
                {
                    if(ss[j]=='A' && ss[j+1]=='B')
                    {
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
            // ss[i]='p';
            // ss[i+1]='p';
            // cout<<ss<<endl;
            // if(t1=='A')
            //     {if(ss.find("BA")!=string::npos)
            //         {
            //             cout<<"YES"<<endl;
            //             return 0;
            //         }
            //     else
            //     {
            //         cout<<"NO"<<endl;
            //         return 0;
            //     }}
            // else if(t1=='B')
            //     {if(ss.find("AB")!=string::npos)
            //         {
            //             cout<<"YES"<<endl;
            //             return 0;
            //         }
            //     else
            //     {
            //         cout<<"NO"<<endl;
            //         return 0;
            //     }}
        }
    }

    cout<<"NO"<<endl;




}