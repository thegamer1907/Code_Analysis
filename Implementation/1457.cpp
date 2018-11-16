#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define F first
#define S second
#define boost ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0)
using namespace std;
const int N=1e7+1;
int main()
{
    boost;
    //freopen("in.txt","r",stdin);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B')
            {
                if(s[i+1]=='G')
                {
                    swap(s[i],s[i+1]);
                    i++;
                }
            }
        }
    }
    cout<<s;
    return 0;
}