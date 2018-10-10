#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;

int binary(int x)
{ int sup=v.size();
  int inf=0;
  int mid=(sup+inf)/2;
  
  
  while (v[mid].first!=x)
  { if (v[mid].first>x)
     { sup=mid-1;
       mid=(sup+inf)/2; }
     else {inf=mid+1;
           mid=(sup+inf)/2;}}
    return mid;}       

int main() {
	int n,m,x;
	int c=1;
	int ind=1;
	cin>>n;
	for (int i=0;i<n;i++)
	{cin>>x;
	 for (int j=0;j<x;j++)
	 {v.push_back(make_pair(c,ind)); c++;}
	 ind++;}
	 
	 cin>>m;
	 for (int i=0;i<m;i++)
	 {cin>>x;
	  cout<<v[binary(x)].second<<endl;}}