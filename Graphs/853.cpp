#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main()
{
   int N,k;
    cin>>N>>k;
    int a[N-1];
    int mark[30005];
    memset(mark,0,sizeof(mark));
    for(int i = 1; i<= N-1 ;i++)cin>>a[i];
    int id = 1,t;
    mark[1] =1;
    while(id<=N-1)
    {
        if(id<=N-1)
        t = a[id]+id;
        else
            break;
        
            mark[t]=1;
            id = t;
       
        
    }
    string ans;
     ans = mark[k]==1? "YES" :"NO";
    cout<<ans<<"\n";
    return 0;
}