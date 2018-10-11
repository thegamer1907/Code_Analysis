#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std ;
vector<int> v ;
int main ()
{
    int n,t;
    cin>>n>>t;
    vector<int> v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int res=0,c=0,sum=0,k=0;
    for(int i=0; i<v.size(); i++)
    {
        sum+=v[i];
        c++;
        while(sum>t)
        {
            sum-=v[k];
            c--;
            k++;
        }
        res=max(res,c);
    }
    cout<<res;
return 0 ;
}
