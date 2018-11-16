#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,m,p=0,q=0,t=0;
cin>>n;
vector<int>a;
for(long long int i=0;i<n;i++)
	{ int k ;
	  cin>>k;
  	  a.push_back(k);
	 } 
cin>>m;
vector<int>b;
for(long long int j=0;j<m;j++){
  int v;	cin>>v;	
  b.push_back(v);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
vector<int>::const_iterator itr=a.begin();
vector<int>::const_iterator itr1=b.begin();
for(itr;itr!=a.end();itr++){
	if(*itr==*itr1||abs(*itr-*itr1)==1)
	    {
		p++;
		itr1++;
	}
  if((*itr-*itr1)>1)
     {   itr--;
        itr1++; 
     }	
    if(itr1==b.end())
    break;
}
cout<<p;
 return 0;
}