#include<iostream>
#include<algorithm>
using namespace std;
int h[3],t1,t2;
int main()
{
	cin>>h[0]>>h[1]>>h[2]>>t1>>t2;
	h[0]=(h[0]*3600+h[1]*60+h[2])%43200;
	h[1]=(h[1]*60+h[2])*12%43200;
	h[2]=h[2]*12*60%43200;
	t1=t1*3600%43200;
	t2=t2*3600%43200;
	sort(h,h+3);
	for(int i=0;i<2;i++)
		if(h[i]<t1&&t1<t2&&t2<h[i+1]){cout<<"YES"<<endl;return 0;}
	if((h[2]<t1&&t1<t2&&t2<h[0]+43200)||(h[2]<t1&&t1<t2+43200&&t2+43200<h[0]+43200)||(h[2]<t1+43200&&t1+43200<t2+43200&&t2+43200<h[0]+43200)){cout<<"YES"<<endl;return 0;}
	swap(t1,t2);
	for(int i=0;i<2;i++)
		if(h[i]<t1&&t1<t2&&t2<h[i+1]){cout<<"YES"<<endl;return 0;}
	if((h[2]<t1&&t1<t2&&t2<h[0]+43200)||(h[2]<t1&&t1<t2+43200&&t2+43200<h[0]+43200)||(h[2]<t1+43200&&t1+43200<t2+43200&&t2+43200<h[0]+43200)){cout<<"YES"<<endl;return 0;}
	cout<<"NO"<<endl;
	return 0;
}
