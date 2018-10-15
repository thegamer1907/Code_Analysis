#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;int i,j,k;vector<int> a;int x,y;
    for(i=0;i<n;i++) 
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    int dp[100001];
    for(i=0;i<=100000;i++)
    {
        dp[i]=0;
    }
    for(i=0;i<n;i++)
    {
        dp[a[i]]++;
    }
    vector<int>:: iterator it;
    int num,index;int count=0;
    int l,r;
    
    l=0;r=(n+1)/2;
   
        
        while(r<n)
        {
            if(a[r]>=2*a[l])
            {
                l++;
                count++;
            }
            r++;
        }
        /*
         num=2*a[i];
         it=lower_bound(a.begin()+index,a.end(),num);
         index=it-a.begin();
         if(index<=n-1)
         {
             count++;
         }
         else if(index>=n)
         {
             break;
         }
         index++;*/
    
    cout<<n-count<<endl;
    
	// your code goes here
	return 0;
}
