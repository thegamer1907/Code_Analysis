/**********************
*@Name:H - Race Against Time CodeForces - 868B
*
*@Author: Nervending
*@Describtion:
*@DateTime: 2017-10-25 14:50:00
***********************/
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

const int maxn=0;

int main(){
	double  h,m,s;
	double  st,ed;
	cin>>h>>m>>s>>st>>ed;
	if(st==12) st=0;
	if(ed==12)  ed=0;
	st*=5;
	ed*=5;
	if(st>ed)swap(st,ed);
	h+=m/60+s/3600;
	h*=5;
	if(h>=60)h-=60;
	m+=s/60;
	if(m>=60)m-=60;
	int	n1=0,n2=0;
	if(h>st&&h<ed) n1++;
	else if(h<st||h>ed) n2++;
	if(m>st&&m<ed) n1++;
	else if(m<st||m>ed) n2++;
	if(s>st&&s<ed) n1++;
	else if(s<st||s>ed) n2++;
	if(n1&&n2) cout<<"NO";
	else cout<<"YES";
	return 0;
}

	 	 	   		 							  	 		   	 		