#include <bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	
	t1=((t1%12)*60*60);
	t2=((t2%12)*60*60);
	
	h=((h%12)*60*60)+m*12+s;
	m=(m*60*12+s);
	s=s*12*60;	
	if(t1>t2)
		swap(t1,t2);
	t2-=t1;
	h-=t1;
	m-=t1;
	s-=t1;
	t1=0;
	if(h<0)
	h+=43200;
	if(m<0)
	m+=43200;
	if(s<0)
	s+=43200;
	
	if(t2 > m && t2 > h && t2 > s ){
		cout<<"YES"<<endl;
		return 0;
	}
	if(t2 < m && t2 < h && t2 < s ){
		cout<<"YES"<<endl;
		return 0;
	}
	
	cout<<"NO"<<endl;
	
}