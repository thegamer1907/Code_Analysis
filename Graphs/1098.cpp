#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define bs binary_search
using namespace std;
float findArea(float a, float b, float c) 
{ 
    float s = (a+b+c)/2; 
    return sqrt(s*(s-a)*(s-b)*(s-c)); 
} 
int main()
{
	   int n,t;
	   cin>>n>>t;
	   int a[n+1];
	    
	   for(int i=1;i<n;i++)
	   {
		   cin>>a[i];
		   a[i]=a[i]+i;
		   
	   }
	   
	   int i=1;
	   int f=0;
	   while((i!=t)&&(i<t))
	   {
		     i=a[i];
		     if(i==t)
		     {
				   f=1;
				 }
				
		   }
		   if(f==1)
		   {
			     cout<<"YES"<<"\n";
			   }
			   else
			   {
				     cout<<"NO"<<"\n";
				   }
	   		  
	}
