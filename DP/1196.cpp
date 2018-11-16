#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cmath>
#include <cstring>
     
using namespace std;
     
     
//#define endl "\n"
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb pop_back
#define pb push_back
#define F first
#define S second

   
 
int main () {
    int n,max=-1,count1=0;
	cin>>n;
	int a[105];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
		
			for(int h=0;h<n;h++)
			{
				if(h>=i&&h<=j)
					sum=sum+1-a[h];
				else
					sum=sum+a[h];
			}
			
			if(sum>max)
				max=sum;
			sum=0;
			
		}
	}
	
	cout<<max<<endl;
	return 0;
        
       
       
   
     
   
    
    
}