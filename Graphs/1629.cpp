#include <iostream>
#include <stdio.h>
#include<algorithm>
#include<math.h>
#include <iomanip>  
#include <algorithm> 
#include<bits/stdc++.h>
#include <iterator>
using namespace std;
long long int m=1e9+7;
int main()
{
   
    int n,t;cin>>n>>t;
    int a[n+1]={0};
    for(int i=1;i<n;i++)cin>>a[i];
    	for (int i = 1; i <=n;)
    	{
    		i+=a[i];
    		if(i==t) {cout<<"YES"<<endl; return 0;}
    		if(i>t) break;
    	}
   cout<<"NO"<<endl;
   return 0;
}