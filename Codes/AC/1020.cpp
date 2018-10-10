#include <iostream>
#include <vector>
using namespace std;
int l[100003],r[100004];
vector< int> a,b;


int solve(vector<int> x,int k,int n)
{
    int ans =0;
    for(int i=k-1;i<x.size();i++)
    {
        ans = max(ans , ((i==x.size()-1)?n:x[i+1]) - ( (i-k+1==0) ?-1:x[i-k])-1);
    }
    return ans;

}
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int cnta=0,cntb=0;
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
            l[i]=-1;
        else if(s[i]==s[i-1])
            l[i]=l[i-1];
        else
            l[i]=i-1;

        if(s[i]=='a')
            cnta++,a.push_back(i);
        else
            cntb++,b.push_back(i);
    }

    for(int i=s.size()-1;i>=0;i--)
    {
        if(i==s.size()-1)
            r[i]=s.size();
        else if (s[i]==s[i+1])
            r[i]=r[i+1];
        else
            r[i]=i+1;
    }
    if(k>=min(cnta,cntb))
    {
       int  ans=n;
        cout<<ans;
        return 0;
    }
    if(k==0)
    {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,r[i]-l[i]-1);
        }
        cout<<ans;
        return 0;
    }
    int ans = max(solve(a,k,n),solve(b,k,n));
    cout<<ans;

    return 0;
}
