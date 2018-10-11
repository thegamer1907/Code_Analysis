#include <bits/stdc++.h>
using namespace std;
long long n,m,k;
map <string, int> q;
string s[200001];
int main()
{
    cin>>n>>m;
    for(int i=1; i<=m+n; i++) 
    {
        cin>>s[i];
        q[s[i]]++;
    }
    
    for(int i=1; i<=n; i++)
    {
        if(q[s[i]]==2) k++;
      //  cout<<s[i]<<endl;
    }
        
    //  cout<<k<<endl;  
    if(k%2==0)
    {
        if(n-k>m-k)
        {
            cout<<"YES";
            return 0;
        }
        cout<<"NO";
        return 0;
    }
    
    if(k%2==1)
    {
        if(n+1>m)
        {
            cout<<"YES";
            return 0;
        }
        cout<<"NO";
    }
    
  
}