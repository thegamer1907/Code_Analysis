#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{  
    fast;
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s.begin(),s.end(),greater <int>());
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    int i=0,j=n/2;
    int visit[n]={};
    int flag=0;
    while(i<n/2)
    {   
        
        if(s[j]<=s[i]/2)
        {
            visit[j]=1;
            i++;
            j++;
        }
        else 
            j++;
        if(j==n)
        {
            flag=1;
             break;
        }
        
        if(flag==1)
            break;
        
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(visit[i]==0)
            cnt++;
    }
    cout<<cnt;
    return 0;
    
    
}