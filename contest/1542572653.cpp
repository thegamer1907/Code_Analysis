#include <bits/stdc++.h>
#define  f(i,k,j) for(i=k;i<j;i++)
using namespace std;

int main()

{
	
int h,m,s,t1,t2,c=0; cin>>h>>m>>s>>t1>>t2;

	if(h==12) h=0;
	if(t1==12) t1=0; if(t2==12) t2=0;

	if(t1>t2) swap(t1,t2);

	if(t1<=h && h<t2) c++;
	if(t1<=m/5 &&  m/5 < t2) c++;
	if(t1<=s/5 && s/5 <t2) c++;

	if(c==0 || c==3) {cout<<"YES"; return 0;}
	else cout<<"NO";

}