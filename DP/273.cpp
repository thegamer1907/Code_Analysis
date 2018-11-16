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
	  int n;
	  cin>>n;
	  int a[n];
	  
	  for(int i=0;i<n;i++)
	  cin>>a[i];
	  sort(a,a+n);
	  
	  int m;
	  cin>>m;
	  int b[m];
	  for(int i=0;i<m;i++)
	  cin>>b[i];
	 
	 sort(b,b+m);
	  int i=0,j=0,ans=0;
	  while((i<n)&&(j<m)){
	            int p=abs(b[j]-a[i]);
	         
	            if((p==0)||(p==1))
	            {
					  i++;
					  j++;
					  ans++;
					}
					else
					{
						   if(a[i]>b[j])
						      j++;
						      else
						      i++;
						}	  
    }
    cout<<ans<<"\n";
	  
	   		  
	}
