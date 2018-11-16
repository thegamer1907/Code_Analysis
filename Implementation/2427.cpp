#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
    int temp=240;
    int cnt=0;
    while(temp>k )
    {
        temp-=(cnt+1)*5;
        
        if(temp<k)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout<<min(cnt,n);
    return 0;
}
