#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;



int main()
{
    int n,ans = 0,x,y,one = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==1) one++;
    }
    
    for(int i=0;i<n;i++)
    {
        x=0,y=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]) x++;
            else y++;
            ans = max(ans,one-x+y);
        }
       
    }
    
    cout << ans;
    
}