#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string p;
    cin>>p;
    int n,f,in=0,l=0;
    cin>>n;
    string arr[n];
     for(ll i=0;i<n;i++)
        cin>>arr[i];
    f=0;
    for(ll i=0;i<n;i++)
    {
        if(arr[i][0]==p[0] &&arr[i][1]==p[1])
        {
            f=1;
            break;
        }
        if(p[0]==arr[i][1])
            in=1;
        if(p[1]==arr[i][0])
            l=1;
    }
    if((in==1 && l==1)||f==1)
        cout<<"YES";
    else
        cout<<"NO";
    //cout<<<<l


}
