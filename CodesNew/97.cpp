#include<bits/stdc++.h>
#include<iomanip>
#define ll long long
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	int arr[n];
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	//cout<<"whats going on"<<endl;
	sort(arr,arr+n);
	//for(int i=0;i<n;i++)
	  // cout<<arr[i]<<" ";
	
	double max=0;
	if(arr[0]!=0)
	  max=arr[0];
	//cout<<"\nmax ="<<max<<endl;
    for(int i=0;i<n-1;i++)
       {
       	  double temp;
       	  temp=(arr[i+1]-arr[i])/2.0;
       	 // cout<<temp<<"*******"<<endl;
       	  if(temp>max)
       	   max=temp;
       	 //cout<<max<<"+++++++++"<<endl;
	   }
	   if(arr[n-1]!=l)
	   {
	   	 double temp;
	   	 temp=l-arr[n-1];
	   	 if(temp>max)
	   	 max=temp;
	   }
	   std::cout<<std::fixed;
	   std::cout << std::setprecision(9) << max << '\n';
}
