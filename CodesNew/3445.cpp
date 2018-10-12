#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    if(n==1)
    {
        cout<<x[0]+m<<" "<<x[0]+m<<endl;
        return 0;
    }
    sort(x,x+n);
    //for(int i=0;i<n;i++)cout<<x[i];
    int a=x[n-1]+m;
    //int i=0;
    while(m!=0)
    {
     x[0]++;
     sort(x,x+n);
     m--;
    }
    //sort(x,x+n);
    cout<<x[n-1]<<" "<<a<<endl;
    return 0;

}
