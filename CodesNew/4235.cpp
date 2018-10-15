#include<bits/stdc++.h>
#define M 1000000007
#define Z 1000000000000000
#define mx INT_MAX
#define F   first
#define S   second
#define pub push_back
#define pob pop_back
#define ll  long long int
#define pii pair<char, char>
using namespace std;
vector<string>v;
string s[500005],c;
int n,i,j,a[500005]={0},b[500005]={0},x;
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=1;i<n;i++)
    {
        for(j=1;j<s[i].size()&& j<s[i-1].size();j++)
        {
            if(s[i][j]>s[i-1][j]){a[i]=j;break;}
            else if(s[i][j]<s[i-1][j]){b[i]=j;break;}
        }
        if(a[i]==0)b[i]=j;
    }
    x=M;
    for(i=n-1;i>=0;i--)
    {   c="";
        for(j=0;j<x && j<s[i].size();j++)
        {
            c+=s[i][j];
        }
        v.pub(c);
        if(a[i]!=0 && a[i]<x)x=M;
        else if(b[i]!=0)
          x=min(x,b[i]);
    }
   for(i=v.size()-1;i>=0;i--)
    cout<<v[i]<<endl;
}
