#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    fast;
    string h;
    cin>>h;
    int n;
    cin>>n;
    string arr[n];
    bool p=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=i;j>-1;j--)
        {
            string temp1=arr[i]+arr[j],temp2=arr[j]+arr[i];
            if(temp1.find(h)!=-1 || temp2.find(h)!=-1){p=true;}
        }
    }
    if(p)cout<<"YES";
    else cout<<"NO";
    return 0;
}
