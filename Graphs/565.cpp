/*
Try to be a Rainbow in Someone's cloud.
*/
#include<bits/stdc++.h>
#define ll long long
#define l(i,n,x) for(ll i=x;i<n;i++)
#define debug(x) cot<<"####"<<x<<"####"<<endl
#define JUGAAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    JUGAAD;
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    l(i,t,0)
    {
        l(j,n,1)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                s[j-1]='G';
                s[j]='B';
                j++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}