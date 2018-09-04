#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int minv;
#define ll long long int
int main()
{
	//in the name of god
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin>>n;
    bool ans=true;
    if(ans==true)
    {
    	long long int a[n+1];
    for(int i=1;i<=n;i++)
    {
    	 cin>>a[i];
	}
    int mini=1,
	minv=ceil((double(a[1]+1-1))/n);
    for(int i=2;i<=n;i++)
    {
    	bool ans2=true;
    	if(ans2==true)
    	{
    		if(ceil((double(a[i]+1-i))/n)<minv)
    	{
    		mini=i;
    		minv=ceil((double(a[i]+1-i))/n);
    	}
		}
    	
    }
    cout<<mini<<endl;
    return 0;
	}
    
}