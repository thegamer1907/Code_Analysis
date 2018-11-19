#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string  , int>msi;
map<int , int>mii;
set<int>si;
string s,s2,mainPass,ar[100];
int n,ans1,ans2,sol;
int main(int argc, char ** argv)
{
    cin>>mainPass;
    cin >> n;
    if(n==1)
    {
        cin>>s;
        s2=s;
        if((s2[0]==mainPass[1] || s[0]==mainPass[1]) && (s[1]==mainPass[0] || s2[1]==mainPass[0]) || s==mainPass){cout<<"Yes"<<endl;}
        else{cout << "No"<<endl;}
    }
    if(n!=1)
    {
        for(int i=0;i<n;i++)
        {
            cin>>s;
            ar[i]=s;
            if(s[0]==mainPass[1]){ans1=1;}
            if(s[1]==mainPass[0]){ans2=1;}
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==mainPass)
            {
                sol++;
            }
        }
        //cout<<sol<<endl;
        if(sol>=1 || ans1 == 1 && ans2 == 1)
        {
            cout<<"Yes"<<endl;

        }else cout<<"No"<<endl;
    }
    return 0;
}
