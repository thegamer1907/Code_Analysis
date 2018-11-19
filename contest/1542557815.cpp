#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
set<int> c;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	t1=(t1*5)%60;
	h=(h*5+60-t1)%60;
	m=(m+60-t1)%60;
	s=(s+60-t1)%60;
	t2=(t2*5+60-t1)%60;
	c.insert(h);
	c.insert(m);
	c.insert(s);
	cout<<(*c.begin()>=t2||*c.rbegin()<t2?"YES":"NO");
}
  			 			 			 	      	  	 	   	