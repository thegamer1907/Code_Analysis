#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int  n,t,cont=0,sum=0,left=1,right=1;

    cin>>n>>t;
    int a[n];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sum=a[1];
    while(left<=n && right<=n)
    {
        if(left>right)
        {
            right++;
            sum+=a[right];
    
        
        }
        if(sum>t)
        {
            sum-=a[left];
            left++;


        }
        else
        {
            cont=max(cont,right-left+1);
            right++;
            sum+=a[right];
        }



    }
    cout<<cont;







       return 0;
}

 

