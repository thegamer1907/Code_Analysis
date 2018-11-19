#include<stdio.h>
#include<math.h> 
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t1flag1=0,t1flag2=0,t1flag3=0;
	int t2flag1=0,t2flag2=0,t2flag3=0;
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	t1*=10;t2*=10;
	if(h==12) h=0;
	if(s==60) s=0;
	if(m==60) m=0;
	
	int tempm;
	if(s!=0) tempm=m*2+1;
	else tempm=m*2;
	
	int temph;
	if(s!=0 || m!=0)
	temph=(h*5+m/12)*2+1;
	else temph=(h*5+m/12)*2;
/*	if(m%12==0)
	{
	temph=(h*5+m/12)*2;
	}
	else {
		temph=(h*5+m/12)*2+1;
	}
*/	
	int temp[3]={s*2,tempm,temph};
	sort(temp,temp+3);
//	cout<<temp[0]<<temp[1]<<temp[2]<<endl; 
	if(t1<temp[0] || t1>=temp[2]) t1flag1=1;
	else if(t1>=temp[0] && t1<temp[1]) t1flag2=1;
	else if(t1>=temp[1] && t1<temp[2]) t1flag3=1;
	
	if(t2<temp[0] || t2>=temp[2]) t2flag1=1;
	else if(t2>=temp[0] && t2<temp[1]) t2flag2=1;
	else if(t2>=temp[1] && t2<temp[2]) t2flag3=1;
	
	if((t1flag1==1 && t2flag1==1) || (t1flag2==1 && t2flag2==1) ||(t1flag3==1 && t2flag3==1))
	 cout<<"YES";
	 else cout<<"NO";
	 
	 return 0;
}
  	  	  	 	 					 		  				    	